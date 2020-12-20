<?php

/**
 * @file
 * catering_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function catering_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_test|paragraphs_item|person_grid|default';
  $field_group->group_name = 'group_test';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'person_grid';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meet Us',
    'weight' => '0',
    'children' => array(
      0 => 'field_person_grid_person',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meet Us',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-test field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_test|paragraphs_item|person_grid|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Meet Us');

  return $field_groups;
}
