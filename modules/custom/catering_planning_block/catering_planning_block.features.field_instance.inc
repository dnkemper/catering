<?php
/**
 * @file
 * catering_planning_block.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function catering_planning_block_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-event_types-field_event_type_destination'.
  $field_instances['taxonomy_term-event_types-field_event_type_destination'] = array(
    'bundle' => 'event_types',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select which page this event type should map to.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'indicator' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_event_type_destination',
    'label' => 'Destination',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Destination');
  t('Select which page this event type should map to.');

  return $field_instances;
}
