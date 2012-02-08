<?php
/**
 * @file
 * distributors_page.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function distributors_page_field_default_fields() {
  $fields = array();

  // Exported field: 'node-distributors-field_distributor_email'
  $fields['node-distributors-field_distributor_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_distributor_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'distributors',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Contact email address for the distributor.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_distributor_email',
      'label' => 'Distributor Email',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-distributors-field_distributor_overview'
  $fields['node-distributors-field_distributor_overview'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_distributor_overview',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'distributors',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'A short summary about the distributor',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '450',
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_distributor_overview',
      'label' => 'Distributor Overview',
      'required' => 1,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-distributors-field_distributor_phone'
  $fields['node-distributors-field_distributor_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_distributor_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'phone',
      'settings' => array(
        'country' => 'ca',
      ),
      'translatable' => '0',
      'type' => 'phone',
    ),
    'field_instance' => array(
      'bundle' => 'distributors',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Contact phone number for the distributor',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'phone',
          'settings' => array(),
          'type' => 'phone',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_distributor_phone',
      'label' => 'Distributor Phone',
      'required' => 1,
      'settings' => array(
        'ca_phone_parentheses' => 0,
        'ca_phone_separator' => '.',
        'phone_country_code' => 0,
        'phone_default_country_code' => '1',
        'phone_int_max_length' => 15,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A short summary about the distributor');
  t('Contact email address for the distributor.');
  t('Contact phone number for the distributor');
  t('Distributor Email');
  t('Distributor Overview');
  t('Distributor Phone');

  return $fields;
}
