<?php
/**
 * @file
 * about_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function about_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function about_page_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function about_page_node_info() {
  $items = array(
    'employee' => array(
      'name' => t('Employee'),
      'base' => 'node_content',
      'description' => t('The Employee content type is used to display employee information such as an image and a brief description.'),
      'has_title' => '1',
      'title_label' => t('Employee'),
      'help' => '',
    ),
    'ptec' => array(
      'name' => t('P-tec'),
      'base' => 'node_content',
      'description' => t('This is the main content type that holds the P-tec logo and mission statement.'),
      'has_title' => '1',
      'title_label' => t('P-tec'),
      'help' => '',
    ),
  );
  return $items;
}
