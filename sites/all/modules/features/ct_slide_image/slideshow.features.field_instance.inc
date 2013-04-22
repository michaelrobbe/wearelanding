<?php
/**
 * @file
 * slideshow.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function slideshow_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-slide_image-field_slide'
  $field_instances['node-slide_image-field_slide'] = array(
    'bundle' => 'slide_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slide',
    'label' => 'slide image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 2,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '281x304',
      'min_resolution' => '281x304',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('slide image');

  return $field_instances;
}
