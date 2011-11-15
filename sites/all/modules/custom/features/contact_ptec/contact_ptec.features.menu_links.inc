<?php
/**
 * @file
 * contact_ptec.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function contact_ptec_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');


  return $menu_links;
}
