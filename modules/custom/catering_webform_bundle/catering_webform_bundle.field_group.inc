<?php
/**
 * @file
 * catering_webform_bundle.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function catering_webform_bundle_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_1|node|webform|default';
  $field_group->group_name = 'group_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '0',
    'children' => array(
      0 => 'group_webform_main',
      1 => 'group_webform_sidebar',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-row-1 field-group-bootstrap_grid_row',
        'show_heading' => 0,
        'heading_position' => 0,
        'label_element' => 'h3',
        'description_element' => 'p',
        'description' => '',
        'panelize' => 0,
        'bootstrap_grid_col_xs' => '',
        'bootstrap_grid_col_sm' => '',
        'bootstrap_grid_col_md' => '',
        'bootstrap_grid_col_lg' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_row_1|node|webform|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_webform_main|node|webform|default';
  $field_group->group_name = 'group_webform_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '1',
    'children' => array(
      0 => 'webform',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Main',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '0',
        'bootstrap_grid_col_sm' => '6',
        'bootstrap_grid_col_md' => '7',
        'bootstrap_grid_col_lg' => '7',
        'classes' => 'group-webform-main field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_webform_main|node|webform|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_webform_sidebar|node|webform|default';
  $field_group->group_name = 'group_webform_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row_1';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'panelize' => '0',
        'bootstrap_grid_col_xs' => '0',
        'bootstrap_grid_col_sm' => '6',
        'bootstrap_grid_col_md' => '5',
        'bootstrap_grid_col_lg' => '5',
        'classes' => 'group-webform-sidebar field-group-bootstrap_grid_col',
      ),
    ),
  );
  $field_groups['group_webform_sidebar|node|webform|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main');
  t('Row');
  t('Sidebar');

  return $field_groups;
}
