<?php
/**
 * @file
 * Theme and preprocess functions for blocks.
 */

/**
 * Implements theme_breadcrumb().
 */
function catering_breadcrumb(&$variables) {
  $output = '';
  if (!empty($variables['breadcrumb'])) {
    $output = '<h2 class="sr-only">You are here</h2>';
    $seperator = '<span class="breadcrumb-seperator"> / </span>';
    $last = count($variables['breadcrumb']) - 1;
    foreach ($variables['breadcrumb'] as $key => $item) {
      if ($key == $last) {
        $attributes['class'][] = 'last';
        $output .= $item;
      }
      else {
        $output .= $item . $seperator;
      }
    }
    return $output;
  }
}
