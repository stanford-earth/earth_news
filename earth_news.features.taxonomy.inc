<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function earth_news_taxonomy_default_vocabularies() {
  return array(
    'departments_programs' => array(
      'name' => 'Departments/Programs',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_departments_programs',
      'weight' => '2',
      'nodes' => array(
        'press_release' => 'press_release',
        'news' => 'news',
        'award' => 'award',
        'announcement' => 'announcement',
        'feature' => 'feature',
        'event' => 'event',
        'earth_news' => 'earth_news',
        'gallery_pdf' => 'gallery_pdf',
        'gallery' => 'gallery',
        'video' => 'video',
      ),
    ),
  );
}
