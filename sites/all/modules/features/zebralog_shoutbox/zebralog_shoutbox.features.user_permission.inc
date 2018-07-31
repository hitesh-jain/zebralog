<?php
/**
 * @file
 * zebralog_shoutbox.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function zebralog_shoutbox_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'online moderator' => 'online moderator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'online moderator' => 'online moderator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create questions content'.
  $permissions['create questions content'] = array(
    'name' => 'create questions content',
    'roles' => array(
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any questions content'.
  $permissions['delete any questions content'] = array(
    'name' => 'delete any questions content',
    'roles' => array(
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own questions content'.
  $permissions['delete own questions content'] = array(
    'name' => 'delete own questions content',
    'roles' => array(
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any questions content'.
  $permissions['edit any questions content'] = array(
    'name' => 'edit any questions content',
    'roles' => array(
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own questions content'.
  $permissions['edit own questions content'] = array(
    'name' => 'edit own questions content',
    'roles' => array(
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'online moderator' => 'online moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
