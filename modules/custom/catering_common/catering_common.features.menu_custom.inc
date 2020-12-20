<?php
/**
 * @file
 * catering_common.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function catering_common_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer',
    'description' => 'The <em>Footer</em> menu is used for secondary links, shown in the footer area of the site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('The <em>Footer</em> menu is used for secondary links, shown in the footer area of the site.');

  return $menus;
}
