<?php
/**
 * @file
 * featured_slides.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function featured_slides_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_markdown' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
