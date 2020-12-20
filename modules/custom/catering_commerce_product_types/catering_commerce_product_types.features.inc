<?php
/**
 * @file
 * catering_commerce_product_types.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function catering_commerce_product_types_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
    'product_gallon_options' => array(
      'type' => 'product_gallon_options',
      'name' => 'Product - Gallon Options',
      'description' => 'A product with 1 gallon or 1/2 gallon options',
      'help' => '',
      'revision' => 1,
    ),
    'product_pint_options' => array(
      'type' => 'product_pint_options',
      'name' => 'Product - Pint Options',
      'description' => 'A product with 1 pint or 1/2 pint options',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function catering_commerce_product_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
}
