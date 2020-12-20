<?php

/**
 * @file
 * snp_accordion_menu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function snp_accordion_menu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'menu_items_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Menu Items View';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_menu_item_node_title' => 'field_menu_item_node_title',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Node Title */
  $handler->display->display_options['fields']['field_menu_item_node_title']['id'] = 'field_menu_item_node_title';
  $handler->display->display_options['fields']['field_menu_item_node_title']['table'] = 'field_data_field_menu_item_node_title';
  $handler->display->display_options['fields']['field_menu_item_node_title']['field'] = 'field_menu_item_node_title';
  $handler->display->display_options['fields']['field_menu_item_node_title']['label'] = '';
  $handler->display->display_options['fields']['field_menu_item_node_title']['element_label_colon'] = FALSE;
  /* Field: Content: Dietary Indicators */
  $handler->display->display_options['fields']['field_dietary_indicators']['id'] = 'field_dietary_indicators';
  $handler->display->display_options['fields']['field_dietary_indicators']['table'] = 'field_data_field_dietary_indicators';
  $handler->display->display_options['fields']['field_dietary_indicators']['field'] = 'field_dietary_indicators';
  $handler->display->display_options['fields']['field_dietary_indicators']['label'] = '';
  $handler->display->display_options['fields']['field_dietary_indicators']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dietary_indicators']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dietary_indicators']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_dietary_indicators']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'menu_item' => 'menu_item',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_menu_item_node_title' => 'field_menu_item_node_title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_menu_item_node_title' => 'field_menu_item_node_title',
    'field_dietary_indicators' => 'field_dietary_indicators',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['enabled'] = FALSE;
  $export['menu_items_view'] = $view;

  return $export;
}
