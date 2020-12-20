<?php
/**
 * @file
 * catering_planning_block.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function catering_planning_block_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_event_type_destination'.
  $field_bases['field_event_type_destination'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_event_type_destination',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'weddings' => 'Wedding',
        'events' => 'Event',
        'students' => 'Student',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
