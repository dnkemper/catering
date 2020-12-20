<?php
/**
 * @file
 * Theme and preprocess functions for views
 */
/**
 * Implements hook_preprocess_views_expored_form().
 */

/**
 * Implements hook_preprocess_views_view_unformatted().
 */
function catering_preprocess_views_view_unformatted(&$variables) {
  // Add a class-ready string to reference back for the accordion parent.
  $variables['view_name'] = drupal_html_class($variables['view']->human_name);

  // Add an id we can target per panel.
  $variables['section_id'] = 'section-id-' . drupal_html_class($variables['title']);

  // Add a very simple grid for now.
  // @todo: actually do bootstrap rows.
  foreach ($variables['classes_array'] as $key => $class) {
    $variables['classes_array'][$key] = 'product-item';
  }
}
