<?php
/**
 * @file
 * testimonials.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function testimonials_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'testimonials';
  $view->description = 'displays the client testimonials';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonials';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_testimonial_author' => 'field_testimonial_author',
    'field_testimonial_date' => 'field_testimonial_date',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_testimonial_quote']['id'] = 'field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['table'] = 'field_data_field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['field'] = 'field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['text'] = '"[field_testimonial_quote]"';
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_quote']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_testimonial_quote']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_testimonial_quote']['field_api_classes'] = 0;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_testimonial_author']['id'] = 'field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['table'] = 'field_data_field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['field'] = 'field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['label'] = 'from';
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_testimonial_author']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_testimonial_author']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_testimonial_date']['id'] = 'field_testimonial_date';
  $handler->display->display_options['fields']['field_testimonial_date']['table'] = 'field_data_field_testimonial_date';
  $handler->display->display_options['fields']['field_testimonial_date']['field'] = 'field_testimonial_date';
  $handler->display->display_options['fields']['field_testimonial_date']['label'] = 'on';
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_testimonial_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_testimonial_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_testimonial_date']['settings'] = array(
    'format_type' => 'month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_testimonial_date']['field_api_classes'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'testimonial' => 'testimonial',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_testimonial_date) */
  $handler->display->display_options['sorts']['field_testimonial_date_value']['id'] = 'field_testimonial_date_value';
  $handler->display->display_options['sorts']['field_testimonial_date_value']['table'] = 'field_data_field_testimonial_date';
  $handler->display->display_options['sorts']['field_testimonial_date_value']['field'] = 'field_testimonial_date_value';
  $handler->display->display_options['path'] = 'testimonials';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Testimonial';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $export['testimonials'] = $view;

  return $export;
}
