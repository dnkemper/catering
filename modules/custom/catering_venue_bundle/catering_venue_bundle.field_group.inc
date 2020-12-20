<?php
/**
 * @file
 * catering_venue_bundle.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function catering_venue_bundle_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venue_details|node|venue|default';
  $field_group->group_name = 'group_venue_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Venue Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_venue_address',
      1 => 'field_venue_amenities',
      2 => 'field_venue_capacity',
      3 => 'field_venue_event_types',
      4 => 'field_venue_indoor_outdoor',
      5 => 'field_venue_style',
      6 => 'contact_combined',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Venue Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-venue-details field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_venue_details|node|venue|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Venue Details');

  return $field_groups;
}
