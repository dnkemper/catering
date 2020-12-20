<?php

/**
 * @file
 * Theme and preprocess functions for nodes.
 */

/**
 * Implements hook_preprocess_node().
 */
function catering_preprocess_node(&$vars) {
  // Add theme hook suggestion for view mode.
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
  // Add theme hook suggestion for view mode.
  $vars['classes_array'][] = 'node--' . $vars['type'] . '--' . $vars['view_mode'];
  // Add the policies and procedures node to the menu content type.
  if ($vars['type'] == 'menu') {
    $vars['policies'] = node_view(node_load(31));
  }

  // Give the menu item title element a class.
  switch ($vars['type']) {
    case 'example':
      switch ($vars['view_mode']) {
        case 'teaser':
          $vars['classes_array'][] = 'panel';
          $vars['classes_array'][] = 'panel-default';
          $vars['title_attributes_array']['class'][] = 'panel-title';
          break;

      }
      break;

    case 'menu':
      switch ($vars['view_mode']) {
        case 'teaser':
          $vars['title_attributes_array']['class'][] = 'panel-title';
          $vars['classes_array'][] = 'panel';
          $vars['classes_array'][] = 'panel-default';
          break;

      }
      break;

    case 'menu_item':
      $vars['title_attributes_array']['class'][] = 'menu-item-title';
      break;

    case 'product_display':
      switch ($vars['view_mode']) {
        case 'teaser':
          $vars['classes_array'][] = 'panel';
          $vars['classes_array'][] = 'panel-default';
          break;

      }

      break;

    case 'venue':
      switch ($vars['view_mode']) {
        case 'teaser':
          $vars['title_attributes_array']['class'][] = 'panel-title';
          $vars['classes_array'][] = 'panel';
          $vars['classes_array'][] = 'panel-default';

          if ($vars['field_venue_exclusive'][0]['value'] == 0) {
            unset($vars['content']['field_venue_exclusive']);
          }
          break;

      }
      break;

    case 'person':
      if ($vars['view_mode'] == 'teaser') {
        $vars['classes_array'][] = 'panel';
        $vars['classes_array'][] = 'panel-default';
        hide($vars['content']['links']['node']);
      }
      break;

  }
}
