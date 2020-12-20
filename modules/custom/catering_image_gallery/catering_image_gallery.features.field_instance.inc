<?php

/**
 * @file
 * catering_image_gallery.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function catering_image_gallery_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-snp_image_gallery-field_snp_img_gallery_img'.
  $field_instances['paragraphs_item-snp_image_gallery-field_snp_img_gallery_img'] = array(
    'bundle' => 'snp_image_gallery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fancybox',
        'settings' => array(
          'fancybox_caption' => 'none',
          'fancybox_caption_custom' => '',
          'fancybox_gallery' => 'post',
          'fancybox_gallery_custom' => '',
          'fancybox_image_style_content' => 'snp_img_gallery_square_thumbnail',
          'fancybox_image_style_fancybox' => 'snp_img_gallery_lightbox',
        ),
        'type' => 'fancybox',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'media_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'snp_img_gallery_masonry' => array(
        'label' => 'hidden',
        'module' => 'fancybox',
        'settings' => array(
          'fancybox_caption' => 'auto',
          'fancybox_caption_custom' => '',
          'fancybox_gallery' => 'post',
          'fancybox_gallery_custom' => '',
          'fancybox_image_style_content' => 'snp_img_gallery_masonry_thumbnail',
          'fancybox_image_style_fancybox' => 'snp_img_gallery_lightbox',
        ),
        'type' => 'fancybox',
        'weight' => 0,
      ),
      'snp_img_gallery_slideshow' => array(
        'label' => 'hidden',
        'module' => 'slick_fields',
        'settings' => array(
          'asnavfor_auto' => 0,
          'asnavfor_main' => '',
          'asnavfor_thumbnail' => '',
          'aspect_ratio' => '',
          'cache' => '',
          'color_field' => '',
          'colorbox_style' => '',
          'current_display' => 'main',
          'current_view_mode' => 'snp_img_gallery_slideshow',
          'grid' => '',
          'grid_medium' => '',
          'grid_small' => '',
          'iframe_lazy' => FALSE,
          'image_style' => '',
          'lightbox_ready' => FALSE,
          'markup' => 0,
          'media_switch' => '',
          'mousewheel' => 0,
          'nested_optionset' => '',
          'nested_slick' => FALSE,
          'nested_style' => '',
          'optionset' => 'default',
          'optionset_thumbnail' => '',
          'overridables' => array(
            'arrows' => 0,
            'autoplay' => 0,
            'dots' => 0,
            'draggable' => 0,
          ),
          'override' => 0,
          'picture' => FALSE,
          'picture_fallback' => '',
          'picture_ready' => FALSE,
          'picture_style' => '',
          'preserve_keys' => FALSE,
          'skin' => 'default',
          'skin_arrows' => '',
          'skin_dots' => '',
          'skin_thumbnail' => '',
          'slide_caption' => array(
            'alt_field' => 0,
            'title_field' => 0,
          ),
          'slide_classes' => '',
          'slide_image' => '',
          'slide_layout' => '',
          'slide_link' => '',
          'slide_overlay' => array(),
          'slide_title' => '',
          'thumbnail_caption' => '',
          'thumbnail_hover' => 0,
          'thumbnail_style' => '',
          'type' => '',
          'use_ajax' => FALSE,
          'view_mode' => '',
          'visible_slides' => '',
        ),
        'type' => 'slick',
        'weight' => 0,
      ),
      'view_mode_selector' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_snp_img_gallery_img',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'snp/image_gallery/images',
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

  // Exported field_instance:
  // 'paragraphs_item-snp_image_gallery-field_snp_img_gallery_view_mode'.
  $field_instances['paragraphs_item-snp_image_gallery-field_snp_img_gallery_view_mode'] = array(
    'bundle' => 'snp_image_gallery',
    'default_value' => array(
      0 => array(
        'value' => 'default',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'snp_img_gallery_masonry' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'snp_img_gallery_slideshow' => array(
        'label' => 'above',
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
    'field_name' => 'field_snp_img_gallery_view_mode',
    'label' => 'View Mode',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
      'view_modes' => array(
        'default' => array(
          'enable' => 1,
        ),
        'diff_standard' => array(
          'enable' => 0,
        ),
        'full' => array(
          'enable' => 0,
        ),
        'paragraphs_editor_preview' => array(
          'enable' => 0,
        ),
        'snp_img_gallery_masonry' => array(
          'enable' => 1,
        ),
        'snp_img_gallery_slideshow' => array(
          'enable' => 1,
        ),
        'snp_section_full_width_background' => array(
          'enable' => 0,
        ),
        'snp_section_image_left' => array(
          'enable' => 0,
        ),
        'snp_section_image_right' => array(
          'enable' => 0,
        ),
        'token' => array(
          'enable' => 0,
        ),
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'view_mode_selector',
      'settings' => array(),
      'type' => 'view_mode_selector_select',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('View Mode');

  return $field_instances;
}
