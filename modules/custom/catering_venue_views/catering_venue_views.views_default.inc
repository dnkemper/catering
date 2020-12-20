<?php
/**
 * @file
 * catering_venue_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function catering_venue_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'venues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_venue_indoor_outdoor_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_venue_amenities_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_venue_style_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_venue_capacity_value' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '500',
        'bef_slider_step' => '1',
        'bef_slider_animate' => 'normal',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '0';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div><p>No results found.</p></div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'venue' => 'venue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Indoor/outdoor (field_venue_indoor_outdoor) */
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['id'] = 'field_venue_indoor_outdoor_value';
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['table'] = 'field_data_field_venue_indoor_outdoor';
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['field'] = 'field_venue_indoor_outdoor_value';
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['group'] = 1;
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['expose']['operator_id'] = 'field_venue_indoor_outdoor_value_op';
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['expose']['label'] = 'Indoor/outdoor';
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['expose']['operator'] = 'field_venue_indoor_outdoor_value_op';
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['expose']['identifier'] = 'field_venue_indoor_outdoor_value';
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_venue_indoor_outdoor_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  /* Filter criterion: Content: Amenities (field_venue_amenities) */
  $handler->display->display_options['filters']['field_venue_amenities_tid']['id'] = 'field_venue_amenities_tid';
  $handler->display->display_options['filters']['field_venue_amenities_tid']['table'] = 'field_data_field_venue_amenities';
  $handler->display->display_options['filters']['field_venue_amenities_tid']['field'] = 'field_venue_amenities_tid';
  $handler->display->display_options['filters']['field_venue_amenities_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_venue_amenities_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_venue_amenities_tid']['expose']['operator_id'] = 'field_venue_amenities_tid_op';
  $handler->display->display_options['filters']['field_venue_amenities_tid']['expose']['label'] = 'Amenities';
  $handler->display->display_options['filters']['field_venue_amenities_tid']['expose']['operator'] = 'field_venue_amenities_tid_op';
  $handler->display->display_options['filters']['field_venue_amenities_tid']['expose']['identifier'] = 'field_venue_amenities_tid';
  $handler->display->display_options['filters']['field_venue_amenities_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_venue_amenities_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_venue_amenities_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_venue_amenities_tid']['vocabulary'] = 'venue_amenities';
  /* Filter criterion: Content: Style (field_venue_style) */
  $handler->display->display_options['filters']['field_venue_style_tid']['id'] = 'field_venue_style_tid';
  $handler->display->display_options['filters']['field_venue_style_tid']['table'] = 'field_data_field_venue_style';
  $handler->display->display_options['filters']['field_venue_style_tid']['field'] = 'field_venue_style_tid';
  $handler->display->display_options['filters']['field_venue_style_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_venue_style_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_venue_style_tid']['expose']['operator_id'] = 'field_venue_style_tid_op';
  $handler->display->display_options['filters']['field_venue_style_tid']['expose']['label'] = 'Style';
  $handler->display->display_options['filters']['field_venue_style_tid']['expose']['operator'] = 'field_venue_style_tid_op';
  $handler->display->display_options['filters']['field_venue_style_tid']['expose']['identifier'] = 'field_venue_style_tid';
  $handler->display->display_options['filters']['field_venue_style_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_venue_style_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_venue_style_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_venue_style_tid']['vocabulary'] = 'venue_style';
  /* Filter criterion: Content: Capacity (field_venue_capacity) */
  $handler->display->display_options['filters']['field_venue_capacity_value']['id'] = 'field_venue_capacity_value';
  $handler->display->display_options['filters']['field_venue_capacity_value']['table'] = 'field_data_field_venue_capacity';
  $handler->display->display_options['filters']['field_venue_capacity_value']['field'] = 'field_venue_capacity_value';
  $handler->display->display_options['filters']['field_venue_capacity_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_venue_capacity_value']['group'] = 1;
  $handler->display->display_options['filters']['field_venue_capacity_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_venue_capacity_value']['expose']['operator_id'] = 'field_venue_capacity_value_op';
  $handler->display->display_options['filters']['field_venue_capacity_value']['expose']['label'] = 'Minimum Capacity';
  $handler->display->display_options['filters']['field_venue_capacity_value']['expose']['operator'] = 'field_venue_capacity_value_op';
  $handler->display->display_options['filters']['field_venue_capacity_value']['expose']['identifier'] = 'field_venue_capacity_value';
  $handler->display->display_options['filters']['field_venue_capacity_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_venue_capacity_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    21 => 0,
  );
  $handler->display->display_options['filters']['field_venue_capacity_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_venue_capacity_value']['group_info']['label'] = 'Capacity';
  $handler->display->display_options['filters']['field_venue_capacity_value']['group_info']['identifier'] = 'field_venue_capacity_value';
  $handler->display->display_options['filters']['field_venue_capacity_value']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_venue_capacity_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '50+',
      'operator' => '>=',
      'value' => array(
        'value' => '50',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '100+',
      'operator' => '>=',
      'value' => array(
        'value' => '100',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '200+',
      'operator' => '>=',
      'value' => array(
        'value' => '200',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => '500+',
      'operator' => '>=',
      'value' => array(
        'value' => '500',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'venues_bef');
  $export['venues'] = $view;

  return $export;
}
