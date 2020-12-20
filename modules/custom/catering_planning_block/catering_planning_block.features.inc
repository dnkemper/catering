<?php
/**
 * @file
 * catering_planning_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function catering_planning_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function catering_planning_block_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_search_autocomplete_config_features_default_settings().
 */
function catering_planning_block_search_autocomplete_config_features_default_settings() {
  return array(
    0 => array(
      'fid' => 4,
      'title' => 'Event Types',
      'selector' => 'input#edit-event-planning-input',
      'weight' => -4,
      'enabled' => 1,
      'parent_fid' => 0,
      'min_char' => 1,
      'max_sug' => 10,
      'no_results' => '{"label":"No results found for [search-phrase].","value":"[search-phrase]","link":"","group":{"group_id":"no_results"}}',
      'all_results' => '{"label":"","value":"","link":"","group":{"group_id":"all_results"}}',
      'auto_submit' => 1,
      'auto_redirect' => 1,
      'translite' => 1,
      'data_source' => 'view',
      'data_callback' => 'search_autocomplete/autocomplete/4/',
      'data_static' => '',
      'data_view' => 'event_types_autocomplete',
      'theme' => 'minimal.css',
    ),
  );
}
