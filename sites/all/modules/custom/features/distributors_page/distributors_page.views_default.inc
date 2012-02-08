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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
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
    'image_link' => 'content',
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
  /* Field: Content: Distributor Overview */
  $handler->display->display_options['fields']['field_distributor_overview']['id'] = 'field_distributor_overview';
  $handler->display->display_options['fields']['field_distributor_overview']['table'] = 'field_data_field_distributor_overview';
  $handler->display->display_options['fields']['field_distributor_overview']['field'] = 'field_distributor_overview';
  $handler->display->display_options['fields']['field_distributor_overview']['label'] = '';
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['alter']['html'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_distributor_overview']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_distributor_overview']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_distributor_overview']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_distributor_overview']['settings'] = array(
    'trim_length' => '250',
  );
  $handler->display->display_options['fields']['field_distributor_overview']['field_api_classes'] = 0;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['distributor_list'] = $view;

  $view = new view;
  $view->name = 'distributors';
  $view->description = 'The main view for the P-tec Distributors page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Distributors';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Distributors';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Distributor Page Summary */
  $handler->display->display_options['fields']['field_distributor_page_summary']['id'] = 'field_distributor_page_summary';
  $handler->display->display_options['fields']['field_distributor_page_summary']['table'] = 'field_data_field_distributor_page_summary';
  $handler->display->display_options['fields']['field_distributor_page_summary']['field'] = 'field_distributor_page_summary';
  $handler->display->display_options['fields']['field_distributor_page_summary']['label'] = '';
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_distributor_page_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_distributor_page_summary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_distributor_page_summary']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_distributor_page_summary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_distributor_page_summary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_distributor_page_summary']['field_api_classes'] = 0;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'distributors';
  $export['distributors'] = $view;

  return $export;
}
