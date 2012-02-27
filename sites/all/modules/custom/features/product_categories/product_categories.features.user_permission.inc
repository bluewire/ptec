<?php
/**
 * @file
 * product_categories.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function product_categories_user_default_permissions() {
  $permissions = array();

  // Exported permission: create product_category content
  $permissions['create product_category content'] = array(
    'name' => 'create product_category content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any product_category content
  $permissions['delete any product_category content'] = array(
    'name' => 'delete any product_category content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own product_category content
  $permissions['delete own product_category content'] = array(
    'name' => 'delete own product_category content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any product_category content
  $permissions['edit any product_category content'] = array(
    'name' => 'edit any product_category content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own product_category content
  $permissions['edit own product_category content'] = array(
    'name' => 'edit own product_category content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  return $permissions;
}
