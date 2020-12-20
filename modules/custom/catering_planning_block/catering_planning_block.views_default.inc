<?php
/**
 * @file
 * catering_planning_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function catering_planning_block_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_types_autocomplete';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'event_types_autocomplete';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'search_autocomplete';
  $handler->display->display_options['style_options']['group_by'] = '0';
  $handler->display->display_options['style_options']['input_label'] = 'name';
  $handler->display->display_options['style_options']['input_link'] = 'field_event_type_destination';
  $handler->display->display_options['style_options']['output_fields'] = array(
    'name' => 'name',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Destination */
  $handler->display->display_options['fields']['field_event_type_destination']['id'] = 'field_event_type_destination';
  $handler->display->display_options['fields']['field_event_type_destination']['table'] = 'field_data_field_event_type_destination';
  $handler->display->display_options['fields']['field_event_type_destination']['field'] = 'field_event_type_destination';
  $handler->display->display_options['fields']['field_event_type_destination']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_destination']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_type_destination']['alter']['path'] = '[field_event_type_destination-value]';
  $handler->display->display_options['fields']['field_event_type_destination']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_destination']['type'] = 'list_key';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'event_types' => 'event_types',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'event_types_autocomplete');
  $handler->display->display_options['path'] = 'event-types-autocomplete';
  $export['event_types_autocomplete'] = $view;

  return $export;
}
