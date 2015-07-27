<?php
/**
 * @file
 * earth_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function earth_news_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_1' => array(
      'name' => 'Research Groups',
      'machine_name' => 'vocabulary_1',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_10' => array(
      'name' => 'Content Categories',
      'machine_name' => 'vocabulary_10',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_11' => array(
      'name' => 'Target Audience',
      'machine_name' => 'vocabulary_11',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_target_audience',
      'weight' => 0,
    ),
    'vocabulary_2' => array(
      'name' => 'Stanford Event Audience',
      'machine_name' => 'vocabulary_2',
      'description' => 'Audience as used on events.stanford.edu (e.g., "Faculty/Staff", "Students", etc.)',
      'hierarchy' => 0,
      'module' => 'features_stanford_event_audience',
      'weight' => 0,
    ),
    'vocabulary_3' => array(
      'name' => 'Stanford Event Categories',
      'machine_name' => 'vocabulary_3',
      'description' => 'Category names as used on events.stanford.edu',
      'hierarchy' => 0,
      'module' => 'features_stanford_event_categories',
      'weight' => 1,
    ),
    'vocabulary_4' => array(
      'name' => 'Departments/Programs',
      'machine_name' => 'vocabulary_4',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_departments_programs',
      'weight' => 2,
    ),
    'vocabulary_5' => array(
      'name' => 'Newsletter',
      'machine_name' => 'vocabulary_5',
      'description' => NULL,
      'hierarchy' => 1,
      'module' => 'simplenews',
      'weight' => 0,
    ),
    'vocabulary_6' => array(
      'name' => 'Forums',
      'machine_name' => 'vocabulary_6',
      'description' => NULL,
      'hierarchy' => 1,
      'module' => 'forum',
      'weight' => -10,
    ),
    'vocabulary_7' => array(
      'name' => 'Gallery Set',
      'machine_name' => 'vocabulary_7',
      'description' => 'Organize similar galleries.',
      'hierarchy' => 0,
      'module' => 'features_set',
      'weight' => 0,
    ),
    'vocabulary_8' => array(
      'name' => 'News Categories',
      'machine_name' => 'vocabulary_8',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_9' => array(
      'name' => 'Themes',
      'machine_name' => 'vocabulary_9',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_themes',
      'weight' => 0,
    ),
  );
}
