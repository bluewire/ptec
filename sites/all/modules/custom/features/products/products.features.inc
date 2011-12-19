<?php
/**
 * @file
 * products.features.inc
 */

/**
 * Implements hook_views_api().
 */
function products_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function products_node_info() {
  $items = array(
    'led_thru_hole_display' => array(
      'name' => t('LED Thru-Hole Display'),
      'base' => 'node_content',
      'description' => t('product display for LED Thru-Hole'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
