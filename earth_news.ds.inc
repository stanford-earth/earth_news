<?php
/**
 * @file
 * earth_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function earth_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|earth_news|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'earth_news';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'ds_post_date_date_only',
      'formatter_settings' => array(
        'field_formatter_class' => 'descriptor',
      ),
    ),
  );
  $export['node|earth_news|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|earth_news|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'earth_news';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'custom_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'field_formatter_class' => '',
      ),
    ),
    'earth_news_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|earth_news|list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|earth_news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'earth_news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'custom_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'earth_news_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_date_only',
      'formatter_settings' => array(
        'field_formatter_class' => 'descriptor',
      ),
    ),
  );
  $export['node|earth_news|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function earth_news_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'custom_title';
  $ds_field->label = 'Earth News Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?
$title = $entity->title;
$source_url = $entity->field_se_news_source[\'und\'][0][\'url\'];
$node_url = url(\'node/\' . $entity->nid);
// If source_url is provided, use that in the link.
$url = (!empty($source_url)) ? $source_url : $node_url;

echo \'<h3><a href="\' . $url . \'">\' . $title . \'</h3></a>\';
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['custom_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'earth_news_image';
  $ds_field->label = 'Earth News Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?
$image_uri = $entity->field_se_news_image[\'und\'][0][\'uri\'];
$image_src = image_style_url(\'3-col-header\', $image_uri);
$image_src = image_style_url(\'stanfordeduhomepage\', $image_uri);
$source_url = $entity->field_se_news_source[\'und\'][0][\'url\'];
$node_url = url(\'node/\' . $entity->nid);
// If source_url is provided, use that in the link.
$url = (!empty($source_url)) ? $source_url : $node_url;

if (!empty($image_uri)) {
  echo \'<a href="\' . $url . \'"><img src="\' . $image_src . \'"></a>\';
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['earth_news_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function earth_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|earth_news|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'earth_news';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'article_image_right';
  $ds_layout->settings = array(
    'regions' => array(
      'image' => array(
        0 => 'field_se_news_image_credit',
        1 => 'field_se_news_image',
        2 => 'field_se_news_image_caption',
      ),
      'text' => array(
        3 => 'field_se_news_summary',
        4 => 'field_se_news_source',
        5 => 'field_se_news_author',
        6 => 'post_date',
        7 => 'field_se_news_video_url',
        8 => 'body',
      ),
    ),
    'fields' => array(
      'field_se_news_image_credit' => 'image',
      'field_se_news_image' => 'image',
      'field_se_news_image_caption' => 'image',
      'field_se_news_summary' => 'text',
      'field_se_news_source' => 'text',
      'field_se_news_author' => 'text',
      'post_date' => 'text',
      'field_se_news_video_url' => 'text',
      'body' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|earth_news|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|earth_news|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'earth_news';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'image_card';
  $ds_layout->settings = array(
    'regions' => array(
      'text' => array(
        0 => 'custom_title',
        2 => 'field_se_news_source',
        3 => 'field_se_news_teaser',
      ),
      'image' => array(
        1 => 'earth_news_image',
      ),
    ),
    'fields' => array(
      'custom_title' => 'text',
      'earth_news_image' => 'image',
      'field_se_news_source' => 'text',
      'field_se_news_teaser' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|earth_news|list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|earth_news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'earth_news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'image_card';
  $ds_layout->settings = array(
    'regions' => array(
      'image' => array(
        0 => 'earth_news_image',
      ),
      'text' => array(
        1 => 'custom_title',
        2 => 'field_se_news_source',
        3 => 'post_date',
        4 => 'field_se_news_teaser',
      ),
    ),
    'fields' => array(
      'earth_news_image' => 'image',
      'custom_title' => 'text',
      'field_se_news_source' => 'text',
      'post_date' => 'text',
      'field_se_news_teaser' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|earth_news|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function earth_news_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block';
  $ds_view_mode->label = 'block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list';
  $ds_view_mode->label = 'List';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['list'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'promo';
  $ds_view_mode->label = 'promo';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['promo'] = $ds_view_mode;

  return $export;
}
