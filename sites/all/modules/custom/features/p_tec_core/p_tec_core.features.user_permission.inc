<?php
/**
 * @file
 * p_tec_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function p_tec_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ptec content
  $permissions['create ptec content'] = array(
    'name' => 'create ptec content',
    'roles' => array(),
  );

  // Exported permission: delete any ptec content
  $permissions['delete any ptec content'] = array(
    'name' => 'delete any ptec content',
    'roles' => array(),
  );

  // Exported permission: delete own ptec content
  $permissions['delete own ptec content'] = array(
    'name' => 'delete own ptec content',
    'roles' => array(),
  );

  // Exported permission: edit any ptec content
  $permissions['edit any ptec content'] = array(
    'name' => 'edit any ptec content',
    'roles' => array(),
  );

  // Exported permission: edit own ptec content
  $permissions['edit own ptec content'] = array(
    'name' => 'edit own ptec content',
    'roles' => array(),
  );

  return $permissions;
}
