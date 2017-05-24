<?php
/**
 * @file
 * ms_locations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ms_locations_taxonomy_default_vocabularies() {
  return array(
    'ms_location' => array(
      'name' => 'Location',
      'machine_name' => 'ms_location',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
