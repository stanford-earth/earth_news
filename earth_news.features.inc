<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function earth_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function earth_news_node_info() {
  $items = array(
    'earth_news' => array(
      'name' => t('Earth News'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function earth_news_views_api() {
  return array(
    'api' => '2',
  );
}
