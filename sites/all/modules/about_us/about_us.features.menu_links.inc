<?php
/**
 * @file
 * about_us.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function about_us_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:about
  $menu_links['main-menu:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => 'About P-tec',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');


  return $menu_links;
}
