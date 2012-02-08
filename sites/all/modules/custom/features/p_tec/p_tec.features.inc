<?php
/**
 * @file
 * p_tec.features.inc
 */

/**
 * Implements hook_node_info().
 */
function p_tec_node_info() {
  $items = array(
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
