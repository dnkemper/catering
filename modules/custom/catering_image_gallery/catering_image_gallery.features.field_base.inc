<?php

/**
 * @file
 * catering_image_gallery.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function catering_image_gallery_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_snp_img_gallery_img'.
  $field_bases['field_snp_img_gallery_img'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_snp_img_gallery_img',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_snp_img_gallery_view_mode'.
  $field_bases['field_snp_img_gallery_view_mode'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_snp_img_gallery_view_mode',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'view_mode_selector',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'view_mode_selector',
  );

  return $field_bases;
}
