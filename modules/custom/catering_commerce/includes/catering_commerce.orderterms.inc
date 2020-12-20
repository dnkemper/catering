<?php

/**
 * @file
 * Checkout pane callback functions for the Student Organization pane.
 */

/**
 * Account pane: form callback.
 */
function catering_commerce_orderterms_checkout_form($form, &$form_state, $checkout_pane, $order) {

  $pane_form = array();

  $pane_form['sales_confirmation'] = array(
    '#type' => 'checkbox',
    '#title' => t('I understand my order is not complete until I hear back from a Sales Coordinator with confirmation.'),
    '#required' => TRUE,
  );

  $pane_form['payment_confirmation'] = array(
    '#type' => 'checkbox',
    '#title' => t('I understand payment is due by 10am four business days prior to my event to confirm my order.'),
    '#required' => TRUE,
  );

  // Get the commerce order entity.
  $order_wrapper = entity_metadata_wrapper('commerce_order', $order);
  // Get the delivery option field value.
  $delivery_option = $order_wrapper->field_commerce_delivery_option->value();
  // Add form item if pickup.
  if ($delivery_option == 'pickup') {
    $pane_form['event_cleanup'] = array(
      '#type' => 'checkbox',
      '#title' => t('I understand I am responsible for cleaning up the event space after the event.'),
      '#required' => TRUE,
    );
  }

  return $pane_form;
}

/**
 * Account pane: checkout form submission callback.
 */
function catering_commerce_orderterms_checkout_form_submit($form, &$form_state, $checkout_pane, $order) {
}

/**
 * Account pane: returns the student org for the Review checkout pane.
 */
function catering_commerce_orderterms_review($form, $form_state, $checkout_pane, $order) {

}
