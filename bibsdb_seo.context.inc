<?php
/**
 * @file
 * bibsdb_seo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bibsdb_seo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'metatags_noindex_follow';
  $context->description = '';
  $context->tag = 'metatags';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/ting/*' => 'search/ting/*',
        'ting/collection/*' => 'ting/collection/*',
        'tags/*' => 'tags/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => '[current-page:title] | [site:name]',
            'default' => '[current-page:title] | [site:name]',
          ),
          'description' => array(
            'value' => '',
            'default' => '',
          ),
          'abstract' => array(
            'value' => '',
            'default' => '',
          ),
          'keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'robots' => array(
            'value' => array(
              'follow' => 'follow',
              'noindex' => 'noindex',
              'index' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
            'default' => array(
              'index' => 0,
              'follow' => 0,
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
          'news_keywords' => array(
            'value' => '',
            'default' => '',
          ),
          'standout' => array(
            'value' => '',
            'default' => '',
          ),
          'rating' => array(
            'value' => '',
            'default' => '',
          ),
          'referrer' => array(
            'value' => '',
            'default' => '',
          ),
          'generator' => array(
            'value' => 'Drupal 7 (http://drupal.org)',
            'default' => 'Drupal 7 (http://drupal.org)',
          ),
          'rights' => array(
            'value' => '',
            'default' => '',
          ),
          'image_src' => array(
            'value' => '',
            'default' => '',
          ),
          'canonical' => array(
            'value' => '',
            'default' => '',
          ),
          'shortlink' => array(
            'value' => '',
            'default' => '',
          ),
          'publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'author' => array(
            'value' => '',
            'default' => '',
          ),
          'original-source' => array(
            'value' => '',
            'default' => '',
          ),
          'prev' => array(
            'value' => '',
            'default' => '',
          ),
          'next' => array(
            'value' => '',
            'default' => '',
          ),
          'revisit-after' => array(
            'value' => '',
            'period' => '',
            'default' => '',
          ),
          'content-language' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.position' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.placename' => array(
            'value' => '',
            'default' => '',
          ),
          'geo.region' => array(
            'value' => '',
            'default' => '',
          ),
          'icbm' => array(
            'value' => '',
            'default' => '',
          ),
          'refresh' => array(
            'value' => '',
            'default' => '',
          ),
          'og:site_name' => array(
            'value' => '[site:name]',
            'default' => '[site:name]',
          ),
          'og:type' => array(
            'value' => 'article',
            'default' => 'article',
          ),
          'og:url' => array(
            'value' => '[current-page:url:absolute]',
            'default' => '[current-page:url:absolute]',
          ),
          'og:title' => array(
            'value' => '[current-page:title]',
            'default' => '[current-page:title]',
          ),
          'og:determiner' => array(
            'value' => '',
            'default' => '',
          ),
          'og:description' => array(
            'value' => '',
            'default' => '',
          ),
          'og:updated_time' => array(
            'value' => '',
            'default' => '',
          ),
          'og:see_also' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:type' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:image:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:latitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:longitude' => array(
            'value' => '',
            'default' => '',
          ),
          'og:street_address' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locality' => array(
            'value' => '',
            'default' => '',
          ),
          'og:region' => array(
            'value' => '',
            'default' => '',
          ),
          'og:postal_code' => array(
            'value' => '',
            'default' => '',
          ),
          'og:country_name' => array(
            'value' => '',
            'default' => '',
          ),
          'og:email' => array(
            'value' => '',
            'default' => '',
          ),
          'og:phone_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:fax_number' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale' => array(
            'value' => '',
            'default' => '',
          ),
          'og:locale:alternate' => array(
            'value' => '',
            'default' => '',
          ),
          'article:author' => array(
            'value' => '',
            'default' => '',
          ),
          'article:publisher' => array(
            'value' => '',
            'default' => '',
          ),
          'article:section' => array(
            'value' => '',
            'default' => '',
          ),
          'article:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'article:published_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:modified_time' => array(
            'value' => '',
            'default' => '',
          ),
          'article:expiration_time' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:first_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:last_name' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:username' => array(
            'value' => '',
            'default' => '',
          ),
          'profile:gender' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:audio:type' => array(
            'value' => '',
            'default' => '',
          ),
          'book:author' => array(
            'value' => '',
            'default' => '',
          ),
          'book:isbn' => array(
            'value' => '',
            'default' => '',
          ),
          'book:release_date' => array(
            'value' => '',
            'default' => '',
          ),
          'book:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:secure_url' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:width' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:height' => array(
            'value' => '',
            'default' => '',
          ),
          'og:video:type' => array(
            'value' => '',
            'default' => '',
          ),
          'video:actor' => array(
            'value' => '',
            'default' => '',
          ),
          'video:actor:role' => array(
            'value' => '',
            'default' => '',
          ),
          'video:director' => array(
            'value' => '',
            'default' => '',
          ),
          'video:writer' => array(
            'value' => '',
            'default' => '',
          ),
          'video:duration' => array(
            'value' => '',
            'default' => '',
          ),
          'video:release_date' => array(
            'value' => '',
            'default' => '',
          ),
          'video:tag' => array(
            'value' => '',
            'default' => '',
          ),
          'video:series' => array(
            'value' => '',
            'default' => '',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('metatags');
  $export['metatags_noindex_follow'] = $context;

  return $export;
}
