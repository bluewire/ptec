<?php
/**
 * @file
 * about_us.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function about_us_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'about';
  $view->description = 'About P-tec';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About Us';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: History */
  $handler->display->display_options['fields']['field_history']['id'] = 'field_history';
  $handler->display->display_options['fields']['field_history']['table'] = 'field_data_field_history';
  $handler->display->display_options['fields']['field_history']['field'] = 'field_history';
  $handler->display->display_options['fields']['field_history']['label'] = '';
  $handler->display->display_options['fields']['field_history']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_history']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_history']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_history']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_history']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_history']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_history']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_history']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_history']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_history']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_history']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_history']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_history']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_history']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_history']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_history']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_history']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_history']['field_api_classes'] = 0;
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
  $handler->display->display_options['path'] = 'about';
  $export['about'] = $view;

  $view = new view;
  $view->name = 'employees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Employees';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The P-tec Team';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_profile_picture']['field_api_classes'] = 0;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_name']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_title']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_title']['field_api_classes'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = 0;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['employees'] = $view;

  $view = new view;
  $view->name = 'history';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'History';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'History';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['path'] = 'history';
  $export['history'] = $view;

  $view = new view;
  $view->name = 'mission';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mission';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Mission';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Mission Statement */
  $handler->display->display_options['fields']['field_mission_statment']['id'] = 'field_mission_statment';
  $handler->display->display_options['fields']['field_mission_statment']['table'] = 'field_data_field_mission_statment';
  $handler->display->display_options['fields']['field_mission_statment']['field'] = 'field_mission_statment';
  $handler->display->display_options['fields']['field_mission_statment']['label'] = '';
  $handler->display->display_options['fields']['field_mission_statment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mission_statment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mission_statment']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mission_statment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mission_statment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_mission_statment']['field_api_classes'] = 0;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['mission'] = $view;

  $view = new view;
  $view->name = 'vision';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vision';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Vision';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Vision */
  $handler->display->display_options['fields']['field_vision']['id'] = 'field_vision';
  $handler->display->display_options['fields']['field_vision']['table'] = 'field_data_field_vision';
  $handler->display->display_options['fields']['field_vision']['field'] = 'field_vision';
  $handler->display->display_options['fields']['field_vision']['label'] = '';
  $handler->display->display_options['fields']['field_vision']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_vision']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_vision']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_vision']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_vision']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_vision']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_vision']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_vision']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_vision']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_vision']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_vision']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_vision']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_vision']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vision']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_vision']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_vision']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_vision']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_vision']['field_api_classes'] = 0;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['vision'] = $view;

  return $export;
}
