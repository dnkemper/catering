<?php
/**
 * @file
 * catering_commerce.features.inc
 */

/**
 * Implements hook_commerce_fees_default_types().
 */
function catering_commerce_commerce_fees_default_types() {
  $items = array(
    'service_fee' => array(
      'name' => 'service_fee',
      'title' => 'Service Fee',
      'display_title' => '20% Service Fee',
      'description' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function catering_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
