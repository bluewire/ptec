<?php
/**
 * @file
 * home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function home_page_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function home_page_node_info() {
  $items = array(
    'featured_slide' => array(
      'name' => t('Featured Slide'),
      'base' => 'node_content',
      'description' => t('a slide with featured content for the home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('This content will become a slide in the home page slide show.'),
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('a short quote from a satisfied customer'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
