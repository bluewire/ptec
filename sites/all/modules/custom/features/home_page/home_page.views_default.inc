<?php
/**
 * @file
 * home_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_page_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'home_slide_show';
  $view->description = 'featured slide show for the home page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Slide Show';
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
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_featured_slide_layout' => 0,
    'field_featured_slide_image' => 0,
    'field_featured_slide_description' => 0,
    'field_featured_slide_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_featured_slide_layout' => 'field_featured_slide_layout',
    'field_featured_slide_image' => 0,
    'field_featured_slide_description' => 0,
    'field_featured_slide_link' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_slide_order' => 'featured_slide_order',
  );
  /* Field: Content: Featured Slide Layout */
  $handler->display->display_options['fields']['field_featured_slide_layout']['id'] = 'field_featured_slide_layout';
  $handler->display->display_options['fields']['field_featured_slide_layout']['table'] = 'field_data_field_featured_slide_layout';
  $handler->display->display_options['fields']['field_featured_slide_layout']['field'] = 'field_featured_slide_layout';
  $handler->display->display_options['fields']['field_featured_slide_layout']['label'] = '';
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['element_type'] = '0';
  $handler->display->display_options['fields']['field_featured_slide_layout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_slide_layout']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_featured_slide_layout']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_layout']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_featured_slide_layout']['field_api_classes'] = 0;
  /* Field: Content: Featured Slide Image */
  $handler->display->display_options['fields']['field_featured_slide_image']['id'] = 'field_featured_slide_image';
  $handler->display->display_options['fields']['field_featured_slide_image']['table'] = 'field_data_field_featured_slide_image';
  $handler->display->display_options['fields']['field_featured_slide_image']['field'] = 'field_featured_slide_image';
  $handler->display->display_options['fields']['field_featured_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['element_class'] = 'masked';
  $handler->display->display_options['fields']['field_featured_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_slide_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_slide_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_featured_slide_image']['field_api_classes'] = 0;
  /* Field: Content: Featured Slide Description */
  $handler->display->display_options['fields']['field_featured_slide_description']['id'] = 'field_featured_slide_description';
  $handler->display->display_options['fields']['field_featured_slide_description']['table'] = 'field_data_field_featured_slide_description';
  $handler->display->display_options['fields']['field_featured_slide_description']['field'] = 'field_featured_slide_description';
  $handler->display->display_options['fields']['field_featured_slide_description']['label'] = '';
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_slide_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_description']['field_api_classes'] = 0;
  /* Field: Content: Featured Slide Link */
  $handler->display->display_options['fields']['field_featured_slide_link']['id'] = 'field_featured_slide_link';
  $handler->display->display_options['fields']['field_featured_slide_link']['table'] = 'field_data_field_featured_slide_link';
  $handler->display->display_options['fields']['field_featured_slide_link']['field'] = 'field_featured_slide_link';
  $handler->display->display_options['fields']['field_featured_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['text'] = 'Learn More';
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['path'] = 'node/[field_featured_slide_link-target_id]';
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['element_class'] = 'button';
  $handler->display->display_options['fields']['field_featured_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_featured_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_slide_link']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_featured_slide_link']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_featured_slide_link']['field_api_classes'] = 0;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'featured_slide' => 'featured_slide',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'home';
  $export['home_slide_show'] = $view;

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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Testimonial Quote */
  $handler->display->display_options['fields']['field_testimonial_quote']['id'] = 'field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['table'] = 'field_data_field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['field'] = 'field_testimonial_quote';
  $handler->display->display_options['fields']['field_testimonial_quote']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_quote']['alter']['alter_text'] = 0;
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
  /* Field: Content: Testimonial Author */
  $handler->display->display_options['fields']['field_testimonial_author']['id'] = 'field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['table'] = 'field_data_field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['field'] = 'field_testimonial_author';
  $handler->display->display_options['fields']['field_testimonial_author']['label'] = '';
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
  $handler->display->display_options['fields']['field_testimonial_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_author']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_testimonial_author']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_testimonial_author']['field_api_classes'] = 0;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['testimonials'] = $view;

  return $export;
}
