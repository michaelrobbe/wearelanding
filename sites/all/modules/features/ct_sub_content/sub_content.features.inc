<?php
/**
 * @file
 * sub_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function sub_content_node_info() {
  $items = array(
    'sub_section' => array(
      'name' => t('Sub Section'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
