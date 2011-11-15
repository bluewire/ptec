<?php
/**
 * @file
 * contact_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function contact_page_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'distributor';
  $view->description = 'Distributors';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Distributor';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Distributors';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Dis_Name */
  $handler->display->display_options['fields']['field_dis_name']['id'] = 'field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['table'] = 'field_data_field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['field'] = 'field_dis_name';
  $handler->display->display_options['fields']['field_dis_name']['label'] = '';
  $handler->display->display_options['fields']['field_dis_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_name']['field_api_classes'] = 0;
  /* Field: Content: Dis_Logo */
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
  $handler->display->display_options['fields']['field_dis_logo']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_dis_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dis_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_dis_logo']['field_api_classes'] = 0;
  /* Field: Content: Dis_Slogan */
  $handler->display->display_options['fields']['field_dis_slogan']['id'] = 'field_dis_slogan';
  $handler->display->display_options['fields']['field_dis_slogan']['table'] = 'field_data_field_dis_slogan';
  $handler->display->display_options['fields']['field_dis_slogan']['field'] = 'field_dis_slogan';
  $handler->display->display_options['fields']['field_dis_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dis_slogan']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dis_slogan']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_dis_slogan']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_dis_slogan']['field_api_classes'] = 0;
  /* Sort criterion: Content: Dis_Name (field_dis_name) */
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

  /* Display: Contact */
  $handler = $view->new_display('block', 'Contact', 'dis_contact');
  $handler->display->display_options['display_description'] = 'Block on contact page';
  $export['distributor'] = $view;

  return $export;
}
