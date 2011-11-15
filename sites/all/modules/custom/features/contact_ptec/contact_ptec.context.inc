<?php
/**
 * @file
 * contact_ptec.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contact_ptec_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = 'Contact page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/contact-us' => 'content/contact-us',
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
        'views-distributor-dis_contact' => array(
          'module' => 'views',
          'delta' => 'distributor-dis_contact',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-google_voice' => array(
          'module' => 'boxes',
          'delta' => 'google_voice',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact page');
  t('page');
  $export['contact'] = $context;

  return $export;
}
