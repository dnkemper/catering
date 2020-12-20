<?php
/**
 * @file
 */

/**
 * Implements template_preprocess_entity().
 */
function catering_preprocess_entity(&$variables) {

  // Catering menu item paragraphs.
  if ($variables['entity_type'] == 'paragraphs_item') {
    $paragraph_item = $variables['paragraphs_item'];
    $variables['classes_array'][] = 'paragraph-section';
    $variables['classes_array'][] = 'paragraph-item-' . $variables['elements']['#entity']->item_id;

    switch ($variables['elements']['#bundle']) {

      case 'catering_buffet_items':
        $variables['classes_array'][] = 'panel';
        $variables['classes_array'][] = 'panel-default';
        // Create classes for single and tabbed sets.
        if (isset($variables['field_buffet_menu_items']) &&
            count($variables['field_buffet_menu_items']) > 2) {
          $variables['classes_array'][] = 'tabbed-set';
        }
        else {
          $variables['classes_array'][] = 'single-set';
        }
        break;

      case 'catering_card':
        $variables['classes_array'][] = 'panel';
        $variables['classes_array'][] = 'panel-default';
        break;

      case 'catering_card_section':
        // Only suggest the basic_section if we are a top level paragraphs_item.
        if ($variables['elements']['#entity']->field_name == 'field_content_blocks') {
          $variables['theme_hook_suggestions'][] = 'paragraphs_item__basic_section';
        }

        // Set the layout value.
        if (!empty($variables['paragraphs_item']->field_card_section_grid_layout)) {
          $layout = $variables['paragraphs_item']->field_card_section_grid_layout[LANGUAGE_NONE][0]['value'];
        }
        else {
          $layout = 'auto';
        }
        $variables['classes_array'][] = $layout;
        break;

      case 'catering_cta':
        $variables['classes_array'][] = 'jumbotron';
        $variables['content'] = _add_container($variables['content']);
        break;

      case 'catering_info_box':
        $variables['classes_array'][] = 'alert';
        if (!empty($paragraph_item->field_info_box_text_size)) {
          $variables['classes_array'][] = $paragraph_item->field_info_box_text_size[LANGUAGE_NONE][0]['value'];
        }
        if (!empty($paragraph_item->field_info_box_type)) {
          $variables['classes_array'][] = $paragraph_item->field_info_box_type[LANGUAGE_NONE][0]['value'];
        }
        break;

      case 'catering_menu_buffet_section':
        $variables['classes_array'][] = 'menu-section';
        break;

      case 'catering_menu_section':
        $variables['classes_array'][] = 'menu-section';

        // Remove prices for example node menu_items.
        // This seems really hacky.
        $args = arg();
        if ($args[0] == 'node' && is_numeric($args[1])) {
          $node = node_load($args[1]);
          if ($node->type == 'example') {
            if (isset($variables['content']['field_menu_items'])) {
              $menu_item_keys = element_children($variables['content']['field_menu_items']);
              foreach ($menu_item_keys as $key) {
                foreach ($variables['content']['field_menu_items'][$key]['node'] as $delta => $i) {
                  unset($variables['content']['field_menu_items'][$key]['node'][$delta]['field_menu_item_cost']);
                }
              }
            }
          }
        }

        // Get field_menu_layout items.
        $layout = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_menu_layout');
        // Set the layout value to a variable.
        $layout = (!empty($layout)) ? $layout[0]['value'] : 'center';
        // Set vars.
        $image_classes = array();
        $layout_classes = array();
        // If there is a section layout and an image.
        if (!empty($variables['field_menu_featured_image'])) {
          // Set a container class for image position.
          $variables['classes_array'][] = 'has-image-' . $layout;
          // Create a unique CSS selector.
          $selector = 'img-' . $variables['content']['field_menu_featured_image']['#object']->item_id;
          // Setup field_menu_featured_image as a css background image.
          $image_style = $variables['content']['field_menu_featured_image'][0]['#image_style'];
          $uri = $variables['content']['field_menu_featured_image'][0]['#item']['uri'];
          $image_path = image_style_url($image_style, $uri);
          drupal_add_css('.' . $selector . ':after {background-image: url("' . $image_path . '");}', 'inline');
          // Add classes for styles and bg-img implementation.
          $image_classes[] = $selector;
          $image_classes[] = 'menu-bg-img';
          $image_classes[] = 'image-' . $layout;
          if ($layout == 'left' || $layout == 'right') {
            $image_classes[] = 'col-md-3';
          }
          // Hide the featured image from render.
          hide($variables['content']['field_menu_featured_image']);
        }

        // Process in content layout classes.
        switch ($layout) {
          case 'right':
            $layout_classes[] = 'col-md-9';
            break;

          case 'left':
            $layout_classes[] = 'col-md-9';
            $layout_classes[] = 'col-md-offset-3';
            break;

          default:
            $layout_classes[] = 'col-md-12';
            break;

        }

        // Set classes arrays.
        $variables['layout_classes'] = implode(' ', $layout_classes);
        $variables['image_classes'] = implode(' ', $image_classes);
        break;

      case 'catering_text_area':
        $variables['content'] = _add_container($variables['content']);
        break;

      case 'catering_example_section':
      case 'catering_tab_section':
      case 'catering_gallery':
        $variables['theme_hook_suggestions'][] = 'paragraphs_item__basic_section';
        break;

      case 'catering_testimonial_section':
        $variables['theme_hook_suggestions'][] = 'paragraphs_item__basic_section';
        if (!empty($variables['elements']['field_testimonial'])) {
          $keys = array();
          foreach ($variables['elements']['field_testimonial']['#items'] as $item) {
            $keys[] = $item['value'];
          }
          $entities = entity_load('paragraphs_item', $keys);
          $testimonials = entity_view('paragraphs_item', $entities);
          $element = array();
          // Add items.
          $items = array();
          foreach ($testimonials['paragraphs_item'] as $item) {
            $items[] = array('slide' => $item);
          }
          // Add options.
          $options = array('arrows' => TRUE);
          // Attach skin.
          $attach = array('attach_skin' => 'default');
          $element = slick_build($items, $options, array(), $attach);
          $variables['content']['field_testimonial'] = $element;
        }
        break;

    }
  }
}

/**
 * Helper function to wrap content in a container.
 *
 * @param array &$content render array passed by reference.
 *
 * @return array &$content.
 */
function _add_container(&$content) {
  $c = $content;
  $content = array();
  // Container wrapper example.
  $content['container'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('container-smooth'),
    ),
  );
  $content['container']['content'] = $c;

  return $content;
}
