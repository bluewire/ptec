<?php
/**
 * @file
 * distributors_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function distributors_page_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'distributor';
  $context->description = 'The distributors page with summary text and distributor list';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'distributors' => 'distributors',
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
          'weight' => '-10',
        ),
        'views-distributor_list-block' => array(
          'module' => 'views',
          'delta' => 'distributor_list-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The distributors page with summary text and distributor list');
  t('page');
  $export['distributor'] = $context;

  return $export;
}
