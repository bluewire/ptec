<?php
/**
 * @file
 * about_us.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function about_us_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_context';
  $context->description = 'Context for the About page';
  $context->tag = '';
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
          'weight' => '-11',
        ),
        'views-employees-block' => array(
          'module' => 'views',
          'delta' => 'employees-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-mission-block' => array(
          'module' => 'views',
          'delta' => 'mission-block',
          'region' => 'sidebar_second',
          'weight' => '-11',
        ),
        'views-vision-block' => array(
          'module' => 'views',
          'delta' => 'vision-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the About page');
  $export['about_context'] = $context;

  return $export;
}
