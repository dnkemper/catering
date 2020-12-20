<?php
/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements template_preprocess_page().
 */
function catering_preprocess_page(&$vars) {
  // Add a grid definitions for '.main-content' regions.
  if (!empty($vars['page']['sidebar'])) {
    $vars['page']['content']['#wrapper_classes'][] =  'col-md-8';
    $vars['page']['sidebar']['#wrapper_classes'][] =  'col-md-4';
  }
  else {
    $vars['page']['content']['#wrapper_classes'][] =  'col-md-12';
  }

  // Add main-header-bg if applicable.
  if (isset($vars['node']) && !empty($vars['node']->field_page_header_featured_image)) {
    $vars['has_bg_img'] = 'has_bg_img';
    $selector = 'main-header-bg .bg-img';
    // Setup field_menu_featured_image as a css background image.
    $image_style = 'edge_to_edge_large';
    $uri = $vars['node']->field_page_header_featured_image[LANGUAGE_NONE][0]['uri'];
    if (!empty($image_style)) {
      $image_path = image_style_url($image_style, $uri);
    }
    else {
      $image_path = file_create_url($uri);
    }
    drupal_add_css('.' . $selector . ' {background-image: url("' . $image_path . '");}', 'inline');
  }

  // Evaluate and set content containers.
  if ($vars['is_front'] == TRUE) {
    // Remove page_title.
    drupal_set_title('');
    // Set containers.
    $vars['container'] = FALSE;
  }
  if (isset($vars['node'])) {
    switch ($vars['node']->type) {
      case 'menu':
      case 'landing_page':
      case 'example':
        $vars['container'] = FALSE;
        break;
    }
  }
}

/**
 * Implements template_process_page().
 */
function catering_process_page(&$vars) {

  // Add the default main-content class.
  $vars['content_classes_array'][] = 'main-content';

  // If there is no container set OR it's set to true.	
  if (!isset($vars['container']) || $vars['container'] == TRUE) {	
    // Add a container to '.main-content'.	
    $vars['content_classes_array'][] = 'container-smooth';	
  }

  // Add classes for the main_wrapper.
  $vars['content_classes'] = implode(' ', $vars['content_classes_array']);
}
