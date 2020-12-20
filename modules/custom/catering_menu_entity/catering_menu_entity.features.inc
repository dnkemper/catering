<?php

/**
 * @file
 * catering_menu_entity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function catering_menu_entity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function catering_menu_entity_image_default_styles() {
  $styles = array();

  // Exported image style: featured_menu_image.
  $styles['featured_menu_image'] = array(
    'label' => 'Featured Menu Image',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => 900,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function catering_menu_entity_node_info() {
  $items = array(
    'menu' => array(
      'name' => t('Menu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
