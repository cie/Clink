<?php

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _f_attach_user_default_permissions() {
  $permissions = array();

  // Exported permission: upload files
  $permissions[] = array(
    'name' => 'upload files',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: upload files to comments
  $permissions[] = array(
    'name' => 'upload files to comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view files uploaded to comments
  $permissions[] = array(
    'name' => 'view files uploaded to comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view uploaded files
  $permissions[] = array(
    'name' => 'view uploaded files',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
