<?php
/**
 * @file
 * catering_example_entity.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function catering_example_entity_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-example-field_content_blocks'.
  $field_instances['node-example-field_content_blocks'] = array(
    'bundle' => 'example',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'buffet_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_content_blocks',
    'label' => 'Content blocks',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'catering_buffet_items' => -1,
        'catering_buffet_menu_items' => -1,
        'catering_card' => -1,
        'catering_card_section' => -1,
        'catering_cta' => 'catering_cta',
        'catering_example_section' => -1,
        'catering_gallery' => 'catering_gallery',
        'catering_info_box' => -1,
        'catering_menu_buffet_section' => -1,
        'catering_menu_items' => -1,
        'catering_menu_section' => 'catering_menu_section',
        'catering_photo' => -1,
        'catering_tab_item' => -1,
        'catering_tab_section' => -1,
        'catering_testimonial_section' => 'catering_testimonial_section',
        'catering_testimonials' => -1,
        'catering_text_area' => -1,
      ),
      'bundle_weights' => array(
        'catering_buffet_items' => -29,
        'catering_buffet_menu_items' => -30,
        'catering_card' => -28,
        'catering_card_section' => -27,
        'catering_cta' => -34,
        'catering_example_section' => -19,
        'catering_gallery' => -33,
        'catering_info_box' => -26,
        'catering_menu_buffet_section' => -25,
        'catering_menu_items' => -24,
        'catering_menu_section' => -32,
        'catering_photo' => -23,
        'catering_tab_item' => -22,
        'catering_tab_section' => -21,
        'catering_testimonial_section' => -31,
        'catering_testimonials' => -18,
        'catering_text_area' => -20,
      ),
      'default_edit_mode' => 'preview',
      'title' => 'Content Block',
      'title_multiple' => 'Content Blocks',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-example-field_page_header_featured_image'.
  $field_instances['node-example-field_page_header_featured_image'] = array(
    'bundle' => 'example',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'buffet_featured_image',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_header_featured_image',
    'label' => 'Page Header Featured Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/page_featured_image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'sharestream' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content blocks');
  t('Page Header Featured Image');

  return $field_instances;
}
