<?php
/**
 * @file
 * featured_slides.features.inc
 */

/**
 * Implements hook_views_api().
 */
function featured_slides_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function featured_slides_node_info() {
  $items = array(
    'featured_slide' => array(
      'name' => t('Featured Slide'),
      'base' => 'node_content',
      'description' => t('A slide with featured content for the home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
