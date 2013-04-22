<?php
/**
 * @file
 * slideshow.features.inc
 */

/**
 * Implements hook_views_api().
 */
function slideshow_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function slideshow_node_info() {
  $items = array(
    'slide_image' => array(
      'name' => t('Slide Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
