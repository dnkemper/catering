<?php
/**
 * @file
 * catering_commerce.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function catering_commerce_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_checkout_completion_message';
  $strongarm->value = array(
    'value' => '<p>Thank you for your Student Organization catering order submission! Your order has been sent to a Catering Sales Coordinator and the Student Organization Business Office. A Catering Sales Coordinator will be in contact with you within 24 hours to confirm your order. Please call <a href="tel:319-335-3116">(319)-335-3116</a> or email us at <a href="mailto:Hsg-catering@uiowa.edu">Hsg-catering@uiowa.edu</a> for any immediate questions regarding your upcoming order.</p>
',
    'format' => 'filtered_html',
  );
  $export['commerce_checkout_completion_message'] = $strongarm;

  return $export;
}
