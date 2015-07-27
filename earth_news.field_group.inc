<?php
/**
 * @file
 * earth_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function earth_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|earth_news|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'earth_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '2',
    'children' => array(
      0 => 'field_se_news_image',
      1 => 'field_se_news_image_caption',
      2 => 'field_se_news_image_credit',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-image field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image|node|earth_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_remote_article|node|earth_news|form';
  $field_group->group_name = 'group_remote_article';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'earth_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Remote Article',
    'weight' => '3',
    'children' => array(
      0 => 'field_se_news_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-remote-article field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_remote_article|node|earth_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ses_article|node|earth_news|form';
  $field_group->group_name = 'group_ses_article';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'earth_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Local Article',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'upload',
      2 => 'field_se_news_author',
      3 => 'field_se_news_video_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-ses-article field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ses_article|node|earth_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|earth_news|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'earth_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '5',
    'children' => array(
      0 => 'taxonomyextra',
      1 => 'field_published_on',
      2 => 'field_related_faculty',
      3 => 'field_dept_program',
      4 => 'field_se_news_published_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taxonomy|node|earth_news|form'] = $field_group;

  return $export;
}
