<?php

/**
 * @file
 * snp_accordion_menu.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function snp_accordion_menu_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menu_items|paragraphs_item|snp_accordion_menu_item|form';
  $field_group->group_name = 'group_menu_items';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'snp_accordion_menu_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Menu Item Group',
    'weight' => '5',
    'children' => array(
      0 => 'field_snp_accordion_menu_body',
      1 => 'field_accordion_menu_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Menu Item Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-menu-items field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_menu_items|paragraphs_item|snp_accordion_menu_item|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Item Group');

  return $field_groups;
}
