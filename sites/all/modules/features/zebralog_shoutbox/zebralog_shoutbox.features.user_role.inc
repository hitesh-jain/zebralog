<?php
/**
 * @file
 * zebralog_shoutbox.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function zebralog_shoutbox_user_default_roles() {
  $roles = array();

  // Exported role: online moderator.
  $roles['online moderator'] = array(
    'name' => 'online moderator',
    'weight' => 3,
  );

  return $roles;
}
