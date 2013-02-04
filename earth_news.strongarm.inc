<?php

/**
 * Implementation of hook_strongarm().
 */
function earth_news_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_earth_news';
  $strongarm->value = 0;
  $export['comment_anonymous_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_earth_news';
  $strongarm->value = '3';
  $export['comment_controls_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_earth_news';
  $strongarm->value = '4';
  $export['comment_default_mode_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_earth_news';
  $strongarm->value = '1';
  $export['comment_default_order_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_earth_news';
  $strongarm->value = '50';
  $export['comment_default_per_page_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_earth_news';
  $strongarm->value = '0';
  $export['comment_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_earth_news';
  $strongarm->value = '0';
  $export['comment_form_location_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_earth_news';
  $strongarm->value = '1';
  $export['comment_preview_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_earth_news';
  $strongarm->value = '1';
  $export['comment_subject_field_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_earth_news';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '3',
    'revision_information' => '9',
    'author' => '8',
    'options' => '5',
    'comment_settings' => '11',
    'menu' => '7',
    'taxonomy' => '-2',
    'path' => '12',
    'attachments' => '6',
    'path_redirect' => '10',
  );
  $export['content_extra_weights_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_earth_news';
  $strongarm->value = array();
  $export['node_options_earth_news'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_earth_news';
  $strongarm->value = '1';
  $export['upload_earth_news'] = $strongarm;

  return $export;
}
