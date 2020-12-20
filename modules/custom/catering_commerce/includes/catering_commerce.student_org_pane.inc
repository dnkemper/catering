<?php

/**
 * @file
 * Checkout pane callback functions for the Student Organization pane.
 */

/**
 * Account pane: form callback.
 */
function catering_commerce_student_org_pane_checkout_form($form, &$form_state, $checkout_pane, $order) {
  $pane_form = array();
  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);
  $default = $order_wrapper->field_commerce_student_org->value();

  $pane_form['student_org'] = array(
    '#type' => 'textfield',
    '#title' => t('Student Organization'),
    '#description' => t('Please enter the Student Organization that is paying for this order. If you do not know, please contact the Student Organization Business Office at <a href="tel:319-335-3065">(319)-335-3065</a> or email at <a href="mailto:sobo@uiowa.edu">sobo@uiowa.edu</a>.'),
    '#default_value' => $default,
    '#required' => TRUE,
  );

  return $pane_form;
}

/**
 * Account pane: checkout form submission callback.
 */
function catering_commerce_student_org_pane_checkout_form_submit($form, &$form_state, $checkout_pane, &$order) {

  if (!empty($form_state['values'][$checkout_pane['pane_id']])) {
    $pane_values = $form_state['values'][$checkout_pane['pane_id']];

    $order_wrapper = entity_metadata_wrapper('commerce_order', $order);

    $order_wrapper->field_commerce_student_org = $pane_values['student_org'];

    $order_wrapper->save();
  }
}

/**
 * Account pane: returns the student org for the Review checkout pane.
 */
function catering_commerce_student_org_pane_review($form, $form_state, $checkout_pane, $order) {
  $content = array();

  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);

  $content[] = array(
    '#type' => 'item',
    '#markup' => check_plain($order_wrapper->field_commerce_student_org->value()),
  );

  return drupal_render($content);
}
