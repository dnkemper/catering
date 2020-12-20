<?php
/**
 * @file
 * Theme and preprocess functions for blocks.
 */

/**
 * Implements hook_preprocess_block().
 */
function catering_preprocess_block(&$variables) {
 $variables['classes_array'][] = 'block--' . drupal_html_class($variables['block']->module) . '-' . drupal_html_class($variables['block']->delta);

  // Set classes based upon #wrapper_classes.
  // @see page.inc.
  if (isset($variables['elements']['#wrapper_classes'])) {
    foreach ($variables['elements']['#wrapper_classes'] as $class) {
      $variables['classes_array'][] = $class;
    }
  }

  // Add a container to the venues_bef block;
  switch ($variables['elements']['#block']->delta) {
    case 'b41b8ac00650aa2ccc058e322f6777e3';
    $variables['block']->subject .= '<i class="fa fa-shopping-cart" aria-hidden="true"></i>';
      break;

    case 'menus-menus_teaser_block':
      $content = array(
        '#type' => 'markup',
        '#markup' => $variables['content'],
      );
      $content = _add_container($content);
      $variables['block']->subject = '';
      $variables['content'] = render($content);
      break;

    case 'venues-venues_bef':
      $content = array(
        '#type' => 'markup',
        '#markup' => $variables['content'],
      );
      $content = _add_container($content);
      $variables['content'] = render($content);
      break;

  }
}
