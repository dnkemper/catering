<?php

/**
 * @file
 * catering_menu_entity.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function catering_menu_entity_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-menu-field_content_blocks'.
  $field_instances['node-menu-field_content_blocks'] = array(
    'bundle' => 'menu',
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
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
        'catering_cta' => -1,
        'catering_example_section' => -1,
        'catering_gallery' => -1,
        'catering_info_box' => -1,
        'catering_menu_buffet_section' => 'catering_menu_buffet_section',
        'catering_menu_items' => -1,
        'catering_menu_section' => 'catering_menu_section',
        'catering_photo' => -1,
        'catering_tab_item' => -1,
        'catering_tab_section' => -1,
        'catering_testimonial_section' => -1,
        'catering_testimonials' => -1,
        'catering_text_area' => 'catering_text_area',
        'person_grid' => -1,
        'snp_accordion' => -1,
        'snp_accordion_item' => -1,
        'snp_block' => -1,
        'snp_card' => -1,
        'snp_cards' => -1,
        'snp_icon_card' => -1,
        'snp_image_gallery' => -1,
        'snp_map' => -1,
        'snp_map_mp' => -1,
        'snp_section' => 'snp_section',
        'snp_stat' => -1,
        'snp_textarea' => -1,
      ),
      'bundle_weights' => array(
        'catering_buffet_items' => -28,
        'catering_buffet_menu_items' => -27,
        'catering_card' => -26,
        'catering_card_section' => -25,
        'catering_cta' => -29,
        'catering_example_section' => -24,
        'catering_gallery' => -23,
        'catering_info_box' => -22,
        'catering_menu_buffet_section' => -32,
        'catering_menu_items' => -31,
        'catering_menu_section' => -33,
        'catering_photo' => -30,
        'catering_tab_item' => -21,
        'catering_tab_section' => -20,
        'catering_testimonial_section' => -18,
        'catering_testimonials' => -19,
        'catering_text_area' => -34,
        'person_grid' => 19,
        'snp_accordion' => 20,
        'snp_accordion_item' => 21,
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
      'default_edit_mode' => 'preview',
      'title' => 'Content block',
      'title_multiple' => 'Content blocks',
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

  // Exported field_instance: 'node-menu-field_menu_disclaimer'.
  $field_instances['node-menu-field_menu_disclaimer'] = array(
    'bundle' => 'menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add optional "disclaimers". One per line for styling purposes. 
Examples: 
<ul>
<li>20 guest minimum</li>
<li>All prices are subject to a 20% service charge</li>
<li>Not served after 3:00 pm</li>
</ul> ',
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_menu_disclaimer',
    'label' => 'Disclaimer',
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
        'size' => 128,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-menu-field_page_header_featured_image'.
  $field_instances['node-menu-field_page_header_featured_image'] = array(
    'bundle' => 'menu',
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
        'weight' => 2,
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
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add optional "disclaimers". One per line for styling purposes. 
Examples: 
<ul>
<li>20 guest minimum</li>
<li>All prices are subject to a 20% service charge</li>
<li>Not served after 3:00 pm</li>
</ul> ');
  t('Content blocks');
  t('Disclaimer');
  t('Page Header Featured Image');

  return $field_instances;
}
