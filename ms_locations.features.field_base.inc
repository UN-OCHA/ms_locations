<?php
/**
 * @file
 * ms_locations.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ms_locations_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ms_pcode'.
  $field_bases['field_ms_pcode'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ms_pcode',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
