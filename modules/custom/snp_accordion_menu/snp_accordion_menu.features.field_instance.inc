<?php

/**
 * @file
 * snp_accordion_menu.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function snp_accordion_menu_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-catering_menu_section-field_body'.
  $field_instances['paragraphs_item-catering_menu_section-field_body'] = array(
    'bundle' => 'catering_menu_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field is generally used to add guest minimums or generally included options for the section.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'minimal' => 'minimal',
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -8,
            ),
            'minimal' => array(
              'weight' => -9,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-catering_menu_section-field_catering_menu_heading'.
  $field_instances['paragraphs_item-catering_menu_section-field_catering_menu_heading'] = array(
    'bundle' => 'catering_menu_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_catering_menu_heading',
    'label' => 'Heading',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 128,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-catering_menu_section-field_menu_featured_image'.
  $field_instances['paragraphs_item-catering_menu_section-field_menu_featured_image'] = array(
    'bundle' => 'catering_menu_section',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'featured_menu_image',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_menu_featured_image',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'images/menu_section_featured_image',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-catering_menu_section-field_menu_items_list'.
  $field_instances['paragraphs_item-catering_menu_section-field_menu_items_list'] = array(
    'bundle' => 'catering_menu_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_menu_items_list',
    'label' => 'Menu Items',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'catering_buffet_items' => -1,
        'catering_buffet_menu_items' => -1,
        'catering_card' => -1,
        'catering_card_section' => -1,
        'catering_cta' => -1,
        'catering_example_section' => -1,
        'catering_gallery' => -1,
        'catering_info_box' => -1,
        'catering_menu_buffet_section' => -1,
        'catering_menu_items' => 'catering_menu_items',
        'catering_menu_section' => -1,
        'catering_photo' => -1,
        'catering_tab_item' => -1,
        'catering_tab_section' => -1,
        'catering_testimonial_section' => -1,
        'catering_testimonials' => -1,
        'catering_text_area' => -1,
        'person_grid' => -1,
        'snp_accordion' => -1,
        'snp_accordion_item' => -1,
        'snp_accordion_menu' => -1,
        'snp_accordion_menu_item' => -1,
        'snp_block' => -1,
        'snp_card' => -1,
        'snp_cards' => -1,
        'snp_icon_card' => -1,
        'snp_image_gallery' => -1,
        'snp_map' => -1,
        'snp_map_mp' => -1,
        'snp_section' => -1,
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
        'snp_accordion_menu' => 22,
        'snp_accordion_menu_item' => 23,
        'snp_block' => 24,
        'snp_card' => 25,
        'snp_cards' => 26,
        'snp_icon_card' => 27,
        'snp_image_gallery' => 28,
        'snp_map' => 29,
        'snp_map_mp' => 30,
        'snp_section' => 31,
        'snp_stat' => 32,
        'snp_textarea' => 33,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-catering_menu_section-field_menu_layout'.
  $field_instances['paragraphs_item-catering_menu_section-field_menu_layout'] = array(
    'bundle' => 'catering_menu_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_menu_layout',
    'label' => 'Layout',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-snp_accordion_menu-field_accordion_menu_description'.
  $field_instances['paragraphs_item-snp_accordion_menu-field_accordion_menu_description'] = array(
    'bundle' => 'snp_accordion_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This will appear outside of the accordion items',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_accordion_menu_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal' => 'minimal',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal' => array(
              'weight' => 3,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 7,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-snp_accordion_menu-field_snp_accordion_menu_items'.
  $field_instances['paragraphs_item-snp_accordion_menu-field_snp_accordion_menu_items'] = array(
    'bundle' => 'snp_accordion_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_snp_accordion_menu_items',
    'label' => 'Items',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'catering_buffet_items' => -1,
        'catering_buffet_menu_items' => -1,
        'catering_card' => -1,
        'catering_card_section' => -1,
        'catering_cta' => -1,
        'catering_example_section' => -1,
        'catering_gallery' => -1,
        'catering_info_box' => -1,
        'catering_menu_buffet_section' => -1,
        'catering_menu_items' => -1,
        'catering_menu_section' => -1,
        'catering_photo' => -1,
        'catering_tab_item' => -1,
        'catering_tab_section' => -1,
        'catering_testimonial_section' => -1,
        'catering_testimonials' => -1,
        'catering_text_area' => -1,
        'person_grid' => -1,
        'snp_accordion' => -1,
        'snp_accordion_item' => -1,
        'snp_accordion_menu' => -1,
        'snp_accordion_menu_item' => 'snp_accordion_menu_item',
        'snp_block' => -1,
        'snp_card' => -1,
        'snp_cards' => -1,
        'snp_icon_card' => -1,
        'snp_image_gallery' => -1,
        'snp_map' => -1,
        'snp_map_mp' => -1,
        'snp_section' => -1,
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
        'snp_accordion_menu' => 22,
        'snp_accordion_menu_item' => 23,
        'snp_block' => 24,
        'snp_card' => 25,
        'snp_cards' => 26,
        'snp_icon_card' => 27,
        'snp_image_gallery' => 28,
        'snp_map' => 29,
        'snp_map_mp' => 30,
        'snp_section' => 31,
        'snp_stat' => 32,
        'snp_textarea' => 33,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Item',
      'title_multiple' => 'Items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-snp_accordion_menu_item-field_accordion_menu_description'.
  $field_instances['paragraphs_item-snp_accordion_menu_item-field_accordion_menu_description'] = array(
    'bundle' => 'snp_accordion_menu_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This will appear inside of the accordion item',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_accordion_menu_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal' => 'minimal',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal' => array(
              'weight' => 3,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-snp_accordion_menu_item-field_snp_accordion_menu_body'.
  $field_instances['paragraphs_item-snp_accordion_menu_item-field_snp_accordion_menu_body'] = array(
    'bundle' => 'snp_accordion_menu_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_snp_accordion_menu_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'catering_buffet_items' => 'catering_buffet_items',
        'catering_buffet_menu_items' => -1,
        'catering_card' => -1,
        'catering_card_section' => -1,
        'catering_cta' => -1,
        'catering_example_section' => -1,
        'catering_gallery' => -1,
        'catering_info_box' => -1,
        'catering_menu_buffet_section' => -1,
        'catering_menu_items' => 'catering_menu_items',
        'catering_menu_section' => 'catering_menu_section',
        'catering_photo' => -1,
        'catering_tab_item' => -1,
        'catering_tab_section' => -1,
        'catering_testimonial_section' => -1,
        'catering_testimonials' => -1,
        'catering_text_area' => -1,
        'person_grid' => -1,
        'snp_accordion' => -1,
        'snp_accordion_item' => -1,
        'snp_accordion_menu' => -1,
        'snp_accordion_menu_item' => -1,
        'snp_block' => -1,
        'snp_card' => -1,
        'snp_cards' => -1,
        'snp_icon_card' => -1,
        'snp_image_gallery' => -1,
        'snp_map' => -1,
        'snp_map_mp' => -1,
        'snp_section' => -1,
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
        'snp_accordion_menu' => 22,
        'snp_accordion_menu_item' => 23,
        'snp_block' => 24,
        'snp_card' => 25,
        'snp_cards' => 26,
        'snp_icon_card' => 27,
        'snp_image_gallery' => 28,
        'snp_map' => 29,
        'snp_map_mp' => 30,
        'snp_section' => 31,
        'snp_stat' => 32,
        'snp_textarea' => 33,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-snp_accordion_menu_item-field_snp_accordion_menu_title'.
  $field_instances['paragraphs_item-snp_accordion_menu_item-field_snp_accordion_menu_title'] = array(
    'bundle' => 'snp_accordion_menu_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_snp_accordion_menu_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'minimal' => 'minimal',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'minimal' => array(
              'weight' => 3,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Description');
  t('Featured Image');
  t('Heading');
  t('Items');
  t('Layout');
  t('Menu Items');
  t('This field is generally used to add guest minimums or generally included options for the section.');
  t('This will appear inside of the accordion item');
  t('This will appear outside of the accordion items');
  t('Title');

  return $field_instances;
}
