<?php
/**
 * @file
 * featured_slides.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function featured_slides_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer nodequeue
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: create featured_slide content
  $permissions['create featured_slide content'] = array(
    'name' => 'create featured_slide content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured_slide content
  $permissions['delete any featured_slide content'] = array(
    'name' => 'delete any featured_slide content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured_slide content
  $permissions['delete own featured_slide content'] = array(
    'name' => 'delete own featured_slide content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured_slide content
  $permissions['edit any featured_slide content'] = array(
    'name' => 'edit any featured_slide content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured_slide content
  $permissions['edit own featured_slide content'] = array(
    'name' => 'edit own featured_slide content',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'node',
  );

  // Exported permission: manipulate all queues
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: manipulate queues
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      0 => 'administrator',
      1 => 'ptec',
    ),
    'module' => 'nodequeue',
  );

  return $permissions;
}
