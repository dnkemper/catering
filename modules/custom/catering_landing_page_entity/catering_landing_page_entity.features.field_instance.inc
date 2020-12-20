<?php

/**
 * @file
 * catering_landing_page_entity.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function catering_landing_page_entity_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landing_page-field_content_blocks'.
  $field_instances['node-landing_page-field_content_blocks'] = array(
    'bundle' => 'landing_page',
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
          'view_mode' => 'view_mode_selector',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_content_blocks',
    'label' => 'Content blocks',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'catering_buffet_items' => -1,
        'catering_buffet_menu_items' => -1,
        'catering_card' => -1,
        'catering_card_section' => 'catering_card_section',
        'catering_cta' => 'catering_cta',
        'catering_example_section' => 'catering_example_section',
        'catering_gallery' => -1,
        'catering_info_box' => -1,
        'catering_menu_buffet_section' => -1,
        'catering_menu_items' => -1,
        'catering_menu_section' => 'catering_menu_section',
        'catering_photo' => -1,
        'catering_tab_item' => -1,
        'catering_tab_section' => 'catering_tab_section',
        'catering_testimonial_section' => -1,
        'catering_testimonials' => -1,
        'catering_text_area' => 'catering_text_area',
        'person_grid' => 'person_grid',
        'snp_accordion' => 'snp_accordion',
        'snp_accordion_item' => -1,
        'snp_accordion_menu' => 'snp_accordion_menu',
        'snp_accordion_menu_item' => -1,
        'snp_block' => -1,
        'snp_card' => -1,
        'snp_cards' => -1,
        'snp_icon_card' => -1,
        'snp_image_gallery' => 'snp_image_gallery',
        'snp_map' => -1,
        'snp_map_mp' => -1,
        'snp_section' => 'snp_section',
        'snp_stat' => -1,
        'snp_textarea' => -1,
      ),
      'bundle_weights' => array(
        'catering_buffet_items' => -25,
        'catering_buffet_menu_items' => -24,
        'catering_card' => -22,
        'catering_card_section' => -32,
        'catering_cta' => 35,
        'catering_example_section' => -30,
        'catering_gallery' => -20,
        'catering_info_box' => -29,
        'catering_menu_buffet_section' => -23,
        'catering_menu_items' => -27,
        'catering_menu_section' => -26,
        'catering_photo' => -28,
        'catering_tab_item' => -21,
        'catering_tab_section' => -31,
        'catering_testimonial_section' => -18,
        'catering_testimonials' => -19,
        'catering_text_area' => -34,
        'person_grid' => 19,
        'snp_accordion' => 20,
        'snp_accordion_item' => 21,
        'snp_accordion_menu' => -64,
        'snp_accordion_menu_item' => -64,
        'snp_block' => 51,
        'snp_card' => 23,
        'snp_cards' => 24,
        'snp_icon_card' => 54,
        'snp_image_gallery' => 26,
        'snp_map' => 56,
        'snp_map_mp' => 57,
        'snp_section' => 29,
        'snp_stat' => 59,
        'snp_textarea' => 60,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-landing_page-field_page_header_featured_image'.
  $field_instances['node-landing_page-field_page_header_featured_image'] = array(
    'bundle' => 'landing_page',
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_header_featured_image',
    'label' => 'Page Header Featured Image',
    'required' => 0,
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
