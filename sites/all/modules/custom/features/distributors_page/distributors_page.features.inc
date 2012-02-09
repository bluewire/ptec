<?php
/**
 * @file
 * distributors_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function distributors_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function distributors_page_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function distributors_page_node_info() {
  $items = array(
    'distributors' => array(
      'name' => t('Distributor'),
      'base' => 'node_content',
      'description' => t('The Distributor content type is used to display distributor information such as a company logo and a brief description.'),
      'has_title' => '1',
      'title_label' => t('Distributor'),
      'help' => '',
    ),
  );
  return $items;
}
