<?php

/**
 * Helper to implementation of hook_default_fe_block_boxes().
 */
function _f_login_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'User information';
  $fe_block_boxes->format = '3';
  $fe_block_boxes->machine_name = 'user_info';
  $fe_block_boxes->body = '<?php global $user;
if ($user->uid > 0) { ?>
<p style="text-align:right">
Hello 
<?php 
  echo l($user->name, "user/{$user->uid}");
?>! |  <?php
  echo l(\'Settings\', "user/{$user->uid}/edit");
?> &bull; <?php
  echo l(\'Log out\', \'logout\');
?>
</p>
<?php } ?>';

  $export['user_info'] = $fe_block_boxes;

  return $export;
}
