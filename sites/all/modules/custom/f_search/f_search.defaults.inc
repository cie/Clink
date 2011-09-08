<?php

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _f_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer search
  $permissions[] = array(
    'name' => 'administer search',
    'roles' => array(),
  );

  // Exported permission: search content
  $permissions[] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: use advanced search
  $permissions[] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
