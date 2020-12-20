<?php
/**
 * @file
 * Theme and preprocess functions for menus
 */

/**
 * Implements hook_preprocess_taxonomy_term().
 */
function catering_preprocess_taxonomy_term(&$vars) {
  // Create a theme suggestion for machine_name and view mode.
  $vars['theme_hook_suggestions'][] = 'taxonomy_term__' . $vars['vocabulary_machine_name'] . '__' . $vars['view_mode'];
}
