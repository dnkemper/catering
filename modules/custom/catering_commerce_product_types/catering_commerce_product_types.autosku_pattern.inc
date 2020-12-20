<?php
/**
 * @file
 * catering_commerce_product_types.autosku_pattern.inc
 */

/**
 * Implements hook_default_commerce_autosku_patterns().
 */
function catering_commerce_product_types_default_commerce_autosku_patterns() {
  $export = array();

  $commerce_autosku_patterns = new stdClass();
  $commerce_autosku_patterns->disabled = FALSE; /* Edit this to true to make a default commerce_autosku_patterns disabled initially */
  $commerce_autosku_patterns->api_version = 1;
  $commerce_autosku_patterns->product_type = 'product';
  $commerce_autosku_patterns->pattern = '[commerce-product:product-id]-[commerce-product:title]';
  $commerce_autosku_patterns->advanced = array(
    'update_existing' => 1,
    'hide_sku' => 1,
    'case' => 'lowercase',
  );
  $export['product'] = $commerce_autosku_patterns;

  $commerce_autosku_patterns = new stdClass();
  $commerce_autosku_patterns->disabled = FALSE; /* Edit this to true to make a default commerce_autosku_patterns disabled initially */
  $commerce_autosku_patterns->api_version = 1;
  $commerce_autosku_patterns->product_type = 'product_gallon_options';
  $commerce_autosku_patterns->pattern = '[commerce-product:product-id]-[commerce-product:title]';
  $commerce_autosku_patterns->advanced = array(
    'update_existing' => 1,
    'hide_sku' => 1,
    'case' => 'lowercase',
  );
  $export['product_gallon_options'] = $commerce_autosku_patterns;

  $commerce_autosku_patterns = new stdClass();
  $commerce_autosku_patterns->disabled = FALSE; /* Edit this to true to make a default commerce_autosku_patterns disabled initially */
  $commerce_autosku_patterns->api_version = 1;
  $commerce_autosku_patterns->product_type = 'product_pint_options';
  $commerce_autosku_patterns->pattern = '[commerce-product:product-id]-[commerce-product:title]';
  $commerce_autosku_patterns->advanced = array(
    'update_existing' => 1,
    'hide_sku' => 1,
    'case' => 'lowercase',
  );
  $export['product_pint_options'] = $commerce_autosku_patterns;

  return $export;
}
