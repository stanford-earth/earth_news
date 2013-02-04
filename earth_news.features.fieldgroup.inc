<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function earth_news_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_se_news_external
  $groups['earth_news-group_se_news_external'] = array(
    'group_type' => 'standard',
    'type_name' => 'earth_news',
    'group_name' => 'group_se_news_external',
    'label' => 'External News Item',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_se_news_source',
    ),
  );

  // Exported group: group_se_news_image
  $groups['earth_news-group_se_news_image'] = array(
    'group_type' => 'standard',
    'type_name' => 'earth_news',
    'group_name' => 'group_se_news_image',
    'label' => 'Image',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '0',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '0',
    'fields' => array(
      '0' => 'field_se_news_image',
      '1' => 'field_se_news_image_credit',
      '2' => 'field_se_news_image_caption',
    ),
  );

  // Exported group: group_se_news_local
  $groups['earth_news-group_se_news_local'] = array(
    'group_type' => 'standard',
    'type_name' => 'earth_news',
    'group_name' => 'group_se_news_local',
    'label' => 'Local News Item',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_se_news_author',
      '1' => 'field_se_news_summary',
      '2' => 'field_se_news_video_url',
    ),
  );

  // Exported group: group_se_news_taxonomy
  $groups['earth_news-group_se_news_taxonomy'] = array(
    'group_type' => 'standard',
    'type_name' => 'earth_news',
    'group_name' => 'group_se_news_taxonomy',
    'label' => 'Related',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_dept_program',
      '1' => 'field_related_faculty',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('External News Item');
  t('Image');
  t('Local News Item');
  t('Related');

  return $groups;
}
