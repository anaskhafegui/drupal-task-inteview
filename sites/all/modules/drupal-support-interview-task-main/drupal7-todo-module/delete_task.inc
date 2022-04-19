<?php

/**
 * Implementation of Delete Task.
 */
function todolist_delete_task(){
    global $user;
    $id = arg(1);
    $num_updated = db_delete('todolist_task')->condition('tid', $id, '=');

    if (!in_array("administrator", $user->roles) or !in_array("manage all tasks", $user->roles)){

      $num_updated->condition('user_id', $user->uid,'=');

    }
     $num_updated->execute();
    drupal_set_message(t('Task has been deleted!'));
    drupal_goto('todolist/list');
}