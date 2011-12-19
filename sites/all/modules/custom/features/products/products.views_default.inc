<?php
/**
 * @file
 * products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function products_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'product_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product Display';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Display';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Referenced product */
  $handler->display->display_options['relationships']['field_product_reference_product_id']['id'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['field'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Product Reference */
  $handler->display->display_options['fields']['field_product_reference']['id'] = 'field_product_reference';
  $handler->display->display_options['fields']['field_product_reference']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['fields']['field_product_reference']['field'] = 'field_product_reference';
  $handler->display->display_options['fields']['field_product_reference']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_reference']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_reference']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_reference']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_reference']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_reference']['type'] = 'commerce_product_reference_sku_plain';
  $handler->display->display_options['fields']['field_product_reference']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'line_item_type' => 0,
  );
  $handler->display->display_options['fields']['field_product_reference']['field_api_classes'] = 0;
  /* Field: Commerce Product: Chip Material */
  $handler->display->display_options['fields']['field_product_chip_material']['id'] = 'field_product_chip_material';
  $handler->display->display_options['fields']['field_product_chip_material']['table'] = 'field_data_field_product_chip_material';
  $handler->display->display_options['fields']['field_product_chip_material']['field'] = 'field_product_chip_material';
  $handler->display->display_options['fields']['field_product_chip_material']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_chip_material']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_chip_material']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_chip_material']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_chip_material']['field_api_classes'] = 0;
  /* Field: Commerce Product: Emitted Color */
  $handler->display->display_options['fields']['field_product_emitted_color']['id'] = 'field_product_emitted_color';
  $handler->display->display_options['fields']['field_product_emitted_color']['table'] = 'field_data_field_product_emitted_color';
  $handler->display->display_options['fields']['field_product_emitted_color']['field'] = 'field_product_emitted_color';
  $handler->display->display_options['fields']['field_product_emitted_color']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_emitted_color']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_emitted_color']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_emitted_color']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_emitted_color']['field_api_classes'] = 0;
  /* Field: Commerce Product: Lens Type */
  $handler->display->display_options['fields']['field_product_lens_type']['id'] = 'field_product_lens_type';
  $handler->display->display_options['fields']['field_product_lens_type']['table'] = 'field_data_field_product_lens_type';
  $handler->display->display_options['fields']['field_product_lens_type']['field'] = 'field_product_lens_type';
  $handler->display->display_options['fields']['field_product_lens_type']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_product_lens_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_lens_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_lens_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_lens_type']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'led_thru_hole_display' => 'led_thru_hole_display',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'product-display';
  $export['product_display'] = $view;

  return $export;
}
