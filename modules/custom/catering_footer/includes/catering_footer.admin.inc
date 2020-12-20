<?php

/**
 * @file
 * Administrative form functions for the University of Iowa branding bar.
 */

/**
 * Page callback: University of Iowa branding bar configuration form.
 *
 * @see catering_footer_menu()
 */
function catering_footer_config_form($form, &$form_state) {

  $menus = array('none' => 'None');
  $menus = array_merge($menus, menu_get_menus());
  $form['catering_footer_social_media_menu'] = array(
    '#type' => 'select',
    '#title' => t('Connect with us'),
    '#default_value' => variable_get('catering_footer_social_media_menu'),
    '#description' => t('Choose the menu for social media links.'),
    '#options' => $menus,
  );
  $form['catering_footer_custom_menu'] = array(
    '#type' => 'select',
    '#title' => t('Quick Links'),
    '#default_value' => variable_get('catering_footer_custom_menu'),
    '#description' => t('Choose the menu for custom quick links.'),
    '#options' => $menus,
  );

  // Footer Information
  // Provide default values if catering_footer_contact_us is empty.
  $defaults = array('value' => '', 'format' => 'filtered_html');
  $catering_footer_contact_us = variable_get('catering_footer_contact_us');
  empty($catering_footer_contact_us) ? $catering_footer_contact_us = $defaults : $catering_footer_contact_us;
  $form['catering_footer_contact_us'] = array(
    '#type' => 'text_format',
    '#title' => t('Contact Us'),
    '#default_value' => $catering_footer_contact_us['value'],
    '#description' => t('Enter the contact information you would like to display in the footer.'),
    '#format' => $catering_footer_contact_us['format'],
  );

  return system_settings_form($form);
}
