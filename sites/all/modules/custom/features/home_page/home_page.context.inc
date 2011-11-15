<?php
/**
 * @file
 * home_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_page_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'home page layout';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'triptych_first',
          'weight' => '-10',
        ),
        'views-testimonials-block' => array(
          'module' => 'views',
          'delta' => 'testimonials-block',
          'region' => 'triptych_middle',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('home page layout');
  t('page');
  $export['home'] = $context;

  return $export;
}
