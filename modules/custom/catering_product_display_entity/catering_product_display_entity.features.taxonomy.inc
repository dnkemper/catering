<?php
/**
 * @file
 * catering_product_display_entity.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function catering_product_display_entity_taxonomy_default_vocabularies() {
  return array(
    'student_org_commerce_sections' => array(
      'name' => 'Student Org Commerce Sections',
      'machine_name' => 'student_org_commerce_sections',
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
