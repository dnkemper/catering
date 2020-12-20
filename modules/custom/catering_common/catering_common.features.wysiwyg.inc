<?php
/**
 * @file
 * catering_common.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function catering_common_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: minimal.
  $profiles['minimal'] = array(
    'format' => 'minimal',
    'editor' => 'ckeditor',
    'settings' => array(
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Format' => 1,
          'Styles' => 1,
          'CreateDiv' => 1,
        ),
        'btbutton' => array(
          'btbutton' => 1,
        ),
        'drupal_path' => array(
          'Link' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => 'No Styles=div.none
Alert Success=div.alert.alert-success
Alert Info=div.alert.alert-info
Alert Warning=div.alert.alert-warning
Alert Danger=div.alert.alert-danger',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 1,
    ),
    'preferences' => array(
      'add_to_summaries' => FALSE,
      'default' => 1,
      'show_toggle' => 0,
      'user_choose' => 0,
      'version' => '4.7.1.08ffd39',
    ),
    'name' => 'formatminimal',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
