<?php
/**
 * @file
 * distributors_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function distributors_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create distributors content
  $permissions['create distributors content'] = array(
    'name' => 'create distributors content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any distributors content
  $permissions['delete any distributors content'] = array(
    'name' => 'delete any distributors content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own distributors content
  $permissions['delete own distributors content'] = array(
    'name' => 'delete own distributors content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any distributors content
  $permissions['edit any distributors content'] = array(
    'name' => 'edit any distributors content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own distributors content
  $permissions['edit own distributors content'] = array(
    'name' => 'edit own distributors content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  return $permissions;
}
