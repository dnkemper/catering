<?php

/**
 * @file
 * catering_page_entity.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function catering_page_entity_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
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
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-page-field_content_blocks'.
  $field_instances['node-page-field_content_blocks'] = array(
    'bundle' => 'page',
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
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'view_mode_selector',
        ),
        'type' => 'paragraphs_view',
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
        'catering_buffet_items' => 2,
        'catering_buffet_menu_items' => 3,
        'catering_card' => 4,
        'catering_card_section' => 5,
        'catering_cta' => 6,
        'catering_example_section' => 7,
        'catering_gallery' => 8,
        'catering_info_box' => 9,
        'catering_menu_buffet_section' => 10,
        'catering_menu_items' => 11,
        'catering_menu_section' => 12,
        'catering_photo' => 13,
        'catering_tab_item' => 14,
        'catering_tab_section' => 15,
        'catering_testimonial_section' => 17,
        'catering_testimonials' => 16,
        'catering_text_area' => 18,
        'person_grid' => 19,
        'snp_accordion' => 20,
        'snp_accordion_item' => 21,
        'snp_accordion_menu' => 53,
        'snp_accordion_menu_item' => 54,
        'snp_block' => 22,
        'snp_card' => 23,
        'snp_cards' => 24,
        'snp_icon_card' => 25,
        'snp_image_gallery' => 26,
        'snp_map' => 27,
        'snp_map_mp' => 28,
        'snp_section' => 29,
        'snp_stat' => 30,
        'snp_textarea' => 31,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Content blocks');

  return $field_instances;
}
