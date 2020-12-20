<?php

/**
 * @file
 * Checkout pane callback functions for the Student Organization pane.
 */

/**
 * Delivery Option pane: form callback.
 */
function catering_commerce_delivery_option_checkout_form($form, &$form_state, $checkout_pane, $order) {
  $pane_form = array();
  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);
  $default = $order_wrapper->field_commerce_delivery_option->value();

  $pane_form['delivery_option'] = array(
    '#type' => 'select',
    '#title' => t('Confirm your delivery option'),
    '#description' => t('20% service charge on delivery orders. Service fee is waived for pickup orders.'),
    '#options' => array(
      'delivery' => 'Delivery',
      'pickup' => 'Pickup',
    ),
    '#default_value' => $default,
    '#required' => TRUE,
  );

  return $pane_form;
}

/**
 * Delivery Option pane: checkout form validation callback.
 */
function catering_commerce_delivery_option_checkout_form_validate($form, &$form_state, $checkout_pane, &$order) {
  // Set the delivery type based upon user selection in commerce checkout.
  $delivery_type = $form_state['values']['delivery_option']['delivery_option'];
  $product_displays_ids = array();
  foreach (entity_metadata_wrapper('commerce_order', $order)->commerce_line_items as $delta => $line_item_wrapper) {
    if (in_array($line_item_wrapper->type->value(), commerce_product_line_item_types())) {
      // Get the product ids for each commerce line item.
      $pid = $line_item_wrapper->commerce_product->raw();
      $query = new EntityFieldQuery;
      $query->entityCondition('entity_type', 'node', '=')
        ->propertyCondition('type', 'product_display')
        ->fieldCondition('field_catering_products', 'product_id', $pid, '=')
        ->range(0, 1);

      if ($result = $query->execute()) {
        $product_displays_ids[] = key($result['node']);
      }
    }
  }
  if (!empty($product_displays_ids)) {
    // Get the product display nodes for each product.
    $nodes = node_load_multiple($product_displays_ids);
    $validator = array();
    foreach ($nodes as $node) {
      $node_wrapper = entity_metadata_wrapper('node', $node);
      // Get the field data for the product_display node.
      $values = $node_wrapper->field_catering_delivery_type->value();
      // Check for the allowed delivery type.
      foreach ($values as $value) {
        if ($value == $delivery_type) {
          $validator[$node->nid] = 'pass';
          break;
        }
        else {
          $validator[$node->nid] = 'fail';
        }
      }
    }
    // Check the validator array to ensure each node passes.
    if (!empty(array_search('fail', $validator))) {
      $count = count(array_keys($validator, "fail"));
      $item_label = ($count > 1) ? 'items' : 'item';
      form_set_error('delivery_option[delivery_option]', t('You have @count @label in your cart not available for @method. Please <a href="/cart">edit your cart</a>.', array('@count' => $count, '@label' => $item_label, '@method' => $delivery_type)));
      return FALSE;
    }
    else {
      return TRUE;
    }
  }
  else {
    return TRUE;
  }
}

/**
 * Delivery Option pane: checkout form submission callback.
 */
function catering_commerce_delivery_option_checkout_form_submit($form, &$form_state, $checkout_pane, &$order) {
  if (!empty($form_state['values'][$checkout_pane['pane_id']])) {
    $pane_values = $form_state['values'][$checkout_pane['pane_id']];

    $order_wrapper = entity_metadata_wrapper('commerce_order', $order);

    $order_wrapper->field_commerce_delivery_option = $pane_values['delivery_option'];

    $order_wrapper->save();
  }
}

/**
 * Account pane: returns the student org for the Review checkout pane.
 */
function catering_commerce_delivery_option_review($form, $form_state, $checkout_pane, $order) {
  $content = array();

  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);

  $content[] = array(
    '#type' => 'item',
    '#markup' => check_plain($order_wrapper->field_commerce_delivery_option->value()),
  );

  return drupal_render($content);
}
