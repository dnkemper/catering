<?php

/**
 * @file
 * catering_paragraphs.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function catering_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: buffet_featured_image.
  $styles['buffet_featured_image'] = array(
    'label' => 'Buffet Featured Image',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 300,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function catering_paragraphs_paragraphs_info() {
  $items = array(
    'catering_buffet_items' => array(
      'name' => 'Buffet',
      'bundle' => 'catering_buffet_items',
      'locked' => '1',
    ),
    'catering_buffet_menu_items' => array(
      'name' => 'Buffet Menu Items',
      'bundle' => 'catering_buffet_menu_items',
      'locked' => '1',
    ),
    'catering_card' => array(
      'name' => 'Card',
      'bundle' => 'catering_card',
      'locked' => '1',
    ),
    'catering_card_section' => array(
      'name' => 'Card Section',
      'bundle' => 'catering_card_section',
      'locked' => '1',
    ),
    'catering_cta' => array(
      'name' => 'Jumbotron',
      'bundle' => 'catering_cta',
      'locked' => '1',
    ),
    'catering_example_section' => array(
      'name' => 'Example Section',
      'bundle' => 'catering_example_section',
      'locked' => '1',
    ),
    'catering_gallery' => array(
      'name' => 'Gallery',
      'bundle' => 'catering_gallery',
      'locked' => '1',
    ),
    'catering_info_box' => array(
      'name' => 'Info Box',
      'bundle' => 'catering_info_box',
      'locked' => '1',
    ),
    'catering_menu_buffet_section' => array(
      'name' => 'Buffet Section',
      'bundle' => 'catering_menu_buffet_section',
      'locked' => '1',
    ),
    'catering_menu_items' => array(
      'name' => 'List of Menu Items',
      'bundle' => 'catering_menu_items',
      'locked' => '1',
    ),
    'catering_photo' => array(
      'name' => 'Photo',
      'bundle' => 'catering_photo',
      'locked' => '1',
    ),
    'catering_tab_item' => array(
      'name' => 'Tab Item',
      'bundle' => 'catering_tab_item',
      'locked' => '1',
    ),
    'catering_tab_section' => array(
      'name' => 'Tab Section',
      'bundle' => 'catering_tab_section',
      'locked' => '1',
    ),
    'catering_testimonial_section' => array(
      'name' => 'Testimonial Section',
      'bundle' => 'catering_testimonial_section',
      'locked' => '1',
    ),
    'catering_testimonials' => array(
      'name' => 'Testimonials',
      'bundle' => 'catering_testimonials',
      'locked' => '1',
    ),
    'catering_text_area' => array(
      'name' => 'Text area',
      'bundle' => 'catering_text_area',
      'locked' => '1',
    ),
    'person_grid' => array(
      'name' => 'Person grid',
      'bundle' => 'person_grid',
      'locked' => '1',
    ),
  );
  return $items;
}
