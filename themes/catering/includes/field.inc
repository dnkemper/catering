<?php
/**
 * @file
 * Theme and preprocess functions for fields.
 */
function catering_preprocess_field(&$vars) {
  if ($vars['element']['#entity_type'] == 'paragraphs_item' ||
      $vars['element']['#field_type'] == 'paragraphs') {
      $vars['theme_hook_suggestions'][] = 'field__bare';
  }

  switch ($vars['element']['#field_name']) {
    case 'body':
      $vars['theme_hook_suggestions'][] = 'field__bare';
      break;

    case 'field_catering_delivery_type':
      $vars['theme_hook_suggestions'][] = 'field__bare';
      $render = array();
      foreach ($vars['items'] as $item) {
        $render[] = array(
          '#type' => 'html_tag',
          '#tag' => 'span',
          '#value' => $item['#markup'],
          '#attributes' => array(
            'class' => array(
              'label',
              'label-default',
            ),
          ),
        );
      }
      $vars['items'] = $render;
      break;

    case 'field_dietary_indicators':
      $vars['theme_hook_suggestions'][] = 'field__bare';
      break;

    case 'field_menu_item_cost':
      if ($vars['element']['#bundle'] == 'catering_buffet_items') {
        $theme_suggestions = $vars['theme_hook_suggestions'];
        $key = array_search('field__bare', $theme_suggestions);
        unset($theme_suggestions[$key]);
        $vars['theme_hook_suggestions'] = array_values($theme_suggestions);
      }
      break;

    case 'field_venue_exclusive':
      if ($vars['items'][0]['#markup'] == '1') {
        $vars['items'][0]['#markup'] = '<i class="fa fa-star" aria-hidden="true"></i> Exclusive';
      }
      break;

    case 'field_buffet_menu_items':
      if (count($vars['items']) > 1) {
        $vars['theme_hook_suggestions'][] = 'field__buffet_menu_items__tabs';
        foreach ($vars['items'] as $delta => &$item) {
          hide($item['entity']);
          foreach ($item['entity']['paragraphs_item'] as $entity) {
            $vars['items'][$delta]['#id'] = drupal_html_id($entity['field_buffet_menu_label'][0]['#markup']);
            $vars['items'][$delta]['field_buffet_menu_label'] = $entity['field_buffet_menu_label'];
            $vars['items'][$delta]['field_menu_items'] = $entity['field_menu_items'];
          }
        }
      }
      break;

    case 'field_tab_section_tabs':
      if (count($vars['items']) > 1) {
        $vars['theme_hook_suggestions'][] = 'field__tab_section_tabs__tabs';
        foreach ($vars['items'] as $delta => &$item) {
          hide($item['entity']);
          foreach ($item['entity']['paragraphs_item'] as $entity) {
            $vars['items'][$delta]['#id'] = drupal_html_id($entity['field_tab_item_label'][0]['#markup']);
            $vars['items'][$delta]['field_tab_item_label'] = $entity['field_tab_item_label'];
            $vars['items'][$delta]['field_tab_item_content'] = $entity['field_tab_item_content'];
          }
        }
      }
      break;

    case 'field_person_grid_person':
      $vars['theme_hook_suggestions'][] = 'field__flex';
      $vars['content_attributes_array']['class'][] = 'flex-sm-2';
      $vars['content_attributes_array']['class'][] = 'flex-md-4';
      break;

    case 'field_person_grid_title':
      // Zero out the markup.
      $vars['items'] = NULL;

      foreach ($vars['element']['#items'] as $item) {
        $vars['items'][] = array(
          '#prefix' => '<h2>',
          '#suffix' => '</h2>',
          '#markup' => $item['value'],
        );
      }
      break;

    case 'field_basic_page_person_ref':
      $vars['classes_array'][] = 'panel';
      $vars['classes_array'][] = 'panel-default';
      $vars['content_attributes_array']['class'][] = 'panel-body';
      // Flex items.
      $vars['content_attributes_array']['class'][] = 'flex-md-3';
      break;
  }
}
