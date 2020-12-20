<?php
/**
 * @file
 * catering_commerce.features.commerce_checkout_panes.inc
 */

/**
 * Implements hook_commerce_checkout_panes_default().
 */
function catering_commerce_commerce_checkout_panes_default() {
  $panes = array();

  $panes['account'] = array(
    'page' => 'disabled',
    'weight' => -19,
    'pane_id' => 'account',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 0,
    'review' => 1,
  );

  $panes['cart_contents'] = array(
    'page' => 'checkout',
    'weight' => -20,
    'pane_id' => 'cart_contents',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['checkout_completion_message'] = array(
    'page' => 'complete',
    'fieldset' => 0,
    'pane_id' => 'checkout_completion_message',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['checkout_review'] = array(
    'page' => 'review',
    'fieldset' => 0,
    'pane_id' => 'checkout_review',
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => 0,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['commerce_fieldgroup_pane__commerce_event_info'] = array(
    'enabled' => 1,
    'pane_id' => 'commerce_fieldgroup_pane__commerce_event_info',
    'page' => 'event_info',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'review' => 1,
  );

  $panes['commerce_fieldgroup_pane__commerce_user_info'] = array(
    'enabled' => 1,
    'pane_id' => 'commerce_fieldgroup_pane__commerce_user_info',
    'page' => 'user_info',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'review' => 1,
  );

  $panes['customer_profile_billing'] = array(
    'page' => 'disabled',
    'weight' => -20,
    'pane_id' => 'customer_profile_billing',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'enabled' => 0,
    'review' => 1,
  );

  $panes['student_org'] = array(
    'page' => 'checkout',
    'pane_id' => 'student_org',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => -19,
    'enabled' => 1,
    'review' => 1,
  );

  $panes['terms'] = array(
    'page' => 'review',
    'pane_id' => 'terms',
    'fieldset' => 1,
    'collapsible' => 0,
    'collapsed' => 0,
    'weight' => 10,
    'enabled' => 1,
    'review' => 1,
  );

  return $panes;
}
