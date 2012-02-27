<?php
/**
 * @file
 * product_categories.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function product_categories_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'product_categories';
  $view->description = 'a listing of product categories that direct to shopatron';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product Categories';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_image']['field_api_classes'] = 0;
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
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_product_description']['id'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['table'] = 'field_data_field_product_description';
  $handler->display->display_options['fields']['field_product_description']['field'] = 'field_product_description';
  $handler->display->display_options['fields']['field_product_description']['label'] = '';
  $handler->display->display_options['fields']['field_product_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_product_description']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'product_category' => 'product_category',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'products';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['product_categories'] = $view;

  return $export;
}
