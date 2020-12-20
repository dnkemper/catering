<?php

/**
 * @file
 * catering_image_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function catering_image_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function catering_image_gallery_paragraphs_info() {
  $items = array(
    'snp_image_gallery' => array(
      'name' => 'Image Gallery',
      'bundle' => 'snp_image_gallery',
      'locked' => '1',
    ),
  );
  return $items;
}
