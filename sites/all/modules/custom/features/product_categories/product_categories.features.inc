<?php
/**
 * @file
 * product_categories.features.inc
 */

/**
 * Implements hook_views_api().
 */
function product_categories_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function product_categories_node_info() {
  $items = array(
    'product_category' => array(
      'name' => t('Product Category'),
      'base' => 'node_content',
      'description' => t('a top level category of products that will link to shopatron'),
      'has_title' => '1',
      'title_label' => t('Product Category'),
      'help' => '',
    ),
  );
  return $items;
}
