<?php
/**
 * @file
 * featured_slides.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function featured_slides_user_default_roles() {
  $roles = array();

  // Exported role: ptec
  $roles['ptec'] = array(
    'name' => 'ptec',
    'weight' => '3',
  );

  return $roles;
}
