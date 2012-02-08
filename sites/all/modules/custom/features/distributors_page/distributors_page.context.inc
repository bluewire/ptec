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
  $context->name = 'distributors';
  $context->description = 'Layout for the Distributors page.';
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout for the Distributors page.');
  t('page');
  $export['distributors'] = $context;

  return $export;
}
