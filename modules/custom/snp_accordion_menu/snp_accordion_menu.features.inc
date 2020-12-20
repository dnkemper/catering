<?php

/**
 * @file
 * snp_accordion_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function snp_accordion_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function snp_accordion_menu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_paragraphs_info().
 */
function snp_accordion_menu_paragraphs_info() {
  $items = array(
    'catering_menu_section' => array(
      'name' => 'Menu Section',
      'bundle' => 'catering_menu_section',
      'locked' => '1',
    ),
    'snp_accordion_menu' => array(
      'name' => 'Menu Accordion',
      'bundle' => 'snp_accordion_menu',
      'locked' => '1',
    ),
    'snp_accordion_menu_item' => array(
      'name' => 'Accordion Menu Item',
      'bundle' => 'snp_accordion_menu_item',
      'locked' => '1',
    ),
  );
  return $items;
}
