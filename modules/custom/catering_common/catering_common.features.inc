<?php
/**
 * @file
 * catering_common.features.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function catering_common_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['settings']['buttons']['btbutton'] = array(
      'btbutton' => 1,
    ); /* WAS: '' */
    $data['filtered_html']['settings']['buttons']['default']['CreateDiv'] = 1; /* WAS: '' */
    $data['filtered_html']['settings']['buttons']['default']['Styles'] = 1; /* WAS: '' */
    $data['filtered_html']['settings']['stylesSet'] = 'No Styles=div.none
            Alert Success=div.alert.alert-success
            Alert Info=div.alert.alert-info
            Alert Warning=div.alert.alert-warning
            Alert Danger=div.alert.alert-danger'; /* WAS: '' */
  }
  if (isset($data['full_html'])) {
    $data['full_html']['settings']['buttons']['btbutton'] = array(
      'btbutton' => 1,
    ); /* WAS: '' */
    $data['full_html']['settings']['buttons']['default']['CreateDiv'] = 1; /* WAS: '' */
    $data['full_html']['settings']['buttons']['default']['Styles'] = 1; /* WAS: '' */
    $data['full_html']['settings']['stylesSet'] = 'No Styles=div.none
            Alert Success=div.alert.alert-success
            Alert Info=div.alert.alert-info
            Alert Warning=div.alert.alert-warning
            Alert Danger=div.alert.alert-danger'; /* WAS: '' */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function catering_common_image_default_styles() {
  $styles = array();

  // Exported image style: edge_to_edge_large.
  $styles['edge_to_edge_large'] = array(
    'label' => 'Edge to Edge Large',
    'effects' => array(
      4 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 600,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_thumbnail.
  $styles['gallery_thumbnail'] = array(
    'label' => 'Gallery thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 125,
          'height' => 125,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
