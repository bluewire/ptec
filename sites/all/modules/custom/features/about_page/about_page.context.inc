<?php
/**
 * @file
 * about_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function about_page_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = 'The about page with company info, mission, values and employee list';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-13',
        ),
        'views-employees-block' => array(
          'module' => 'views',
          'delta' => 'employees-block',
          'region' => 'content',
          'weight' => '-13',
        ),
        'views-about_us-block_2' => array(
          'module' => 'views',
          'delta' => 'about_us-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-about_us-block_1' => array(
          'module' => 'views',
          'delta' => 'about_us-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('The about page with company info, mission, values and employee list');
  t('page');
  $export['about'] = $context;

  return $export;
}
