<?php
/**
 * @file
 * distributors_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function distributors_page_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'distributor_list';
  $view->description = 'Displays a list of distributors that link to the content for that distributor.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Distributor List';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Distributor Logo */
  $handler->display->display_options['fields']['field_dis_logo']['id'] = 'field_dis_logo';
  $handler->display->display_options['fields']['field_dis_logo']['table'] = 'field_data_field_dis_logo';
  $handler->display->display_options['fields']['field_dis_logo']['field'] = 'field_dis_logo';
  $handler->display->display_options['fields']['field_dis_logo']['label'] = '';
  $handler->display->display_options['fields']['field_dis_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dis_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_dis_logo']['field_api_classes'] = 0;
  /* Field: Content: Distributor Name */
  $handler->display->display_options['fields']['field_dis_name']['id'] = 'field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['table'] = 'field_data_field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['field'] = 'field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['label'] = '';
  $handler->display->display_options['fields']['field_dis_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_dis_name']['field_api_classes'] = 0;
  /* Field: Content: Distributor Website */
  $handler->display->display_options['fields']['field_distributor_website']['id'] = 'field_distributor_website';
  $handler->display->display_options['fields']['field_distributor_website']['table'] = 'field_data_field_distributor_website';
  $handler->display->display_options['fields']['field_distributor_website']['field'] = 'field_distributor_website';
  /* Field: Content: Distributor Overview */
  $handler->display->display_options['fields']['field_distributor_overview']['id'] = 'field_distributor_overview';
  $handler->display->display_options['fields']['field_distributor_overview']['table'] = 'field_data_field_distributor_overview';
  $handler->display->display_options['fields']['field_distributor_overview']['field'] = 'field_distributor_overview';
  /* Sort criterion: Content: Distributor Name (field_dis_name) */
  $handler->display->display_options['sorts']['field_dis_name_value']['id'] = 'field_dis_name_value';
  $handler->display->display_options['sorts']['field_dis_name_value']['table'] = 'field_data_field_dis_name';
  $handler->display->display_options['sorts']['field_dis_name_value']['field'] = 'field_dis_name_value';
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
    'distributors' => 'distributors',
  );

  /* Display: Detailed list */
  $handler = $view->new_display('block', 'Detailed list', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Distributor Logo */
  $handler->display->display_options['fields']['field_dis_logo']['id'] = 'field_dis_logo';
  $handler->display->display_options['fields']['field_dis_logo']['table'] = 'field_data_field_dis_logo';
  $handler->display->display_options['fields']['field_dis_logo']['field'] = 'field_dis_logo';
  $handler->display->display_options['fields']['field_dis_logo']['label'] = '';
  $handler->display->display_options['fields']['field_dis_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_logo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dis_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_dis_logo']['field_api_classes'] = 0;
  /* Field: Content: Distributor Name */
  $handler->display->display_options['fields']['field_dis_name']['id'] = 'field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['table'] = 'field_data_field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['field'] = 'field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['label'] = '';
  $handler->display->display_options['fields']['field_dis_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_dis_name']['field_api_classes'] = 0;
  /* Field: Content: Distributor City */
  $handler->display->display_options['fields']['field_dis_city']['id'] = 'field_dis_city';
  $handler->display->display_options['fields']['field_dis_city']['table'] = 'field_data_field_dis_city';
  $handler->display->display_options['fields']['field_dis_city']['field'] = 'field_dis_city';
  $handler->display->display_options['fields']['field_dis_city']['label'] = '';
  $handler->display->display_options['fields']['field_dis_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dis_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['field_api_classes'] = 0;
  /* Field: Content: Distributor State */
  $handler->display->display_options['fields']['field_dis_state']['id'] = 'field_dis_state';
  $handler->display->display_options['fields']['field_dis_state']['table'] = 'field_data_field_dis_state';
  $handler->display->display_options['fields']['field_dis_state']['field'] = 'field_dis_state';
  $handler->display->display_options['fields']['field_dis_state']['label'] = '';
  $handler->display->display_options['fields']['field_dis_state']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_dis_state']['alter']['text'] = '[field_dis_city], [field_dis_state]';
  $handler->display->display_options['fields']['field_dis_state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['field_api_classes'] = 0;
  /* Field: Content: Distributor Phone */
  $handler->display->display_options['fields']['field_distributor_phone']['id'] = 'field_distributor_phone';
  $handler->display->display_options['fields']['field_distributor_phone']['table'] = 'field_data_field_distributor_phone';
  $handler->display->display_options['fields']['field_distributor_phone']['field'] = 'field_distributor_phone';
  $handler->display->display_options['fields']['field_distributor_phone']['label'] = '';
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_distributor_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_distributor_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_distributor_phone']['field_api_classes'] = 0;
  /* Field: Content: Distributor Email */
  $handler->display->display_options['fields']['field_distributor_email']['id'] = 'field_distributor_email';
  $handler->display->display_options['fields']['field_distributor_email']['table'] = 'field_data_field_distributor_email';
  $handler->display->display_options['fields']['field_distributor_email']['field'] = 'field_distributor_email';
  $handler->display->display_options['fields']['field_distributor_email']['label'] = '';
  $handler->display->display_options['fields']['field_distributor_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_distributor_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_distributor_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_distributor_email']['field_api_classes'] = 0;
  /* Field: Content: Distributor Website */
  $handler->display->display_options['fields']['field_distributor_website']['id'] = 'field_distributor_website';
  $handler->display->display_options['fields']['field_distributor_website']['table'] = 'field_data_field_distributor_website';
  $handler->display->display_options['fields']['field_distributor_website']['field'] = 'field_distributor_website';

  /* Display: Summary list */
  $handler = $view->new_display('block', 'Summary list', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'nothing';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Our Distributors';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h2';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Distributor Name */
  $handler->display->display_options['fields']['field_dis_name']['id'] = 'field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['table'] = 'field_data_field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['field'] = 'field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['label'] = '';
  $handler->display->display_options['fields']['field_dis_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_dis_name']['field_api_classes'] = 0;
  /* Field: Content: Distributor City */
  $handler->display->display_options['fields']['field_dis_city']['id'] = 'field_dis_city';
  $handler->display->display_options['fields']['field_dis_city']['table'] = 'field_data_field_dis_city';
  $handler->display->display_options['fields']['field_dis_city']['field'] = 'field_dis_city';
  $handler->display->display_options['fields']['field_dis_city']['label'] = '';
  $handler->display->display_options['fields']['field_dis_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dis_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_city']['field_api_classes'] = 0;
  /* Field: Content: Distributor State */
  $handler->display->display_options['fields']['field_dis_state']['id'] = 'field_dis_state';
  $handler->display->display_options['fields']['field_dis_state']['table'] = 'field_data_field_dis_state';
  $handler->display->display_options['fields']['field_dis_state']['field'] = 'field_dis_state';
  $handler->display->display_options['fields']['field_dis_state']['label'] = '';
  $handler->display->display_options['fields']['field_dis_state']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_dis_state']['alter']['text'] = '[field_dis_city], [field_dis_state]';
  $handler->display->display_options['fields']['field_dis_state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_state']['field_api_classes'] = 0;
  /* Field: Content: Distributor Website */
  $handler->display->display_options['fields']['field_distributor_website']['id'] = 'field_distributor_website';
  $handler->display->display_options['fields']['field_distributor_website']['table'] = 'field_data_field_distributor_website';
  $handler->display->display_options['fields']['field_distributor_website']['field'] = 'field_distributor_website';
  $handler->display->display_options['fields']['field_distributor_website']['label'] = '';
  $handler->display->display_options['fields']['field_distributor_website']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_distributor_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_distributor_website']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_distributor_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_distributor_website']['field_api_classes'] = 0;
  $export['distributor_list'] = $view;

  return $export;
}
