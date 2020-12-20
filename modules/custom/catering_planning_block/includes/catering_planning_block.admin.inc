<?php
/**
 * @file
 * Administrative form functions for the University of Iowa branding bar.
 */

/**
 * Page callback: catering_planning_block_config_form().
 *
 * @see catering_planning_block_menu()
 */
function catering_planning_block_config_form($form, &$form_state) {
  $form = array();
  $form['catering_planning_block_image'] = array(
    '#title' => t('Image'),
    '#description' => t('Upload an image to use for a background image.'),
    '#type' => 'managed_file',
    '#default_value' => variable_get('catering_planning_block_image', ''),
    '#upload_location' => 'public://catering_planning_block',
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif jpg jpeg png'),
    ),
  );
  $form = system_settings_form($form);
  // Prepend custom submit handler.
  // This needs to fire before system settings submit handler.
  array_unshift($form['#submit'], 'catering_planning_block_config_form_submit');

  return $form;
}

/**
 * Custom submit handler for catering_planning_block_config_form().
 */
function catering_planning_block_config_form_submit($form, &$form_state) {
  if (isset($form_state['values']['catering_planning_block_image']) &&
      $form_state['values']['catering_planning_block_image'] > 0) {

    $file = file_load($form_state['values']['catering_planning_block_image']);
    if ($file) {
      $file->status = FILE_STATUS_PERMANENT;
      file_usage_add($file, 'catering_planning_block', 'block', '1');
      file_save($file);
      variable_set('catering_planning_block_image', $file->fid);
    }
  }
  else {
    $file = file_load(variable_get('catering_planning_block_image', ''));
    if ($file->fid) {
      file_usage_add($file, 'catering_planning_block', 'block', '1');
      file_delete($file, TRUE);
    }
    variable_del('catering_planning_block_image');
  }
  unset($form_state['values']['catering_planning_block_image']);
}
