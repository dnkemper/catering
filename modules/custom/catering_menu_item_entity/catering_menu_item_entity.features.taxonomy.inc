<?php

/**
 * @file
 * catering_menu_item_entity.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function catering_menu_item_entity_taxonomy_default_vocabularies() {
  return array(
    'dietary_indicators' => array(
      'name' => 'Dietary Indicators',
      'machine_name' => 'dietary_indicators',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
