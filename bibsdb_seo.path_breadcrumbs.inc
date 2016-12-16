<?php
/**
 * @file
 * bibsdb_seo.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function bibsdb_seo_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'arrangementer';
  $path_breadcrumb->name = 'Arrangementer';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Arrangementer',
      1 => '%node:field-ding-event-category:name',
      2 => '%node:title',
    ),
    'paths' => array(
      0 => 'arrangementer',
      1 => '%node:field-ding-event-category:url',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'slug',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_event' => 'ding_event',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['arrangementer'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'arrangementskategorisider';
  $path_breadcrumb->name = 'Arrangementskategorisider';
  $path_breadcrumb->path = 'taxonomy/term/%term';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Arrangementer',
      1 => '%term:name',
    ),
    'paths' => array(
      0 => 'arrangementer',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'term' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vids' => array(
            3 => '3',
            14 => 0,
            12 => 0,
            1 => 0,
            7 => 0,
            9 => 0,
            10 => 0,
            4 => 0,
            5 => 0,
            6 => 0,
            2 => 0,
            13 => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['arrangementskategorisider'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'bibliotek_arrangementer_arrangement';
  $path_breadcrumb->name = 'Bibliotek - arrangementer - arrangement';
  $path_breadcrumb->path = 'bibliotek/%slug/arrangementer/%tid';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Biblioteker',
      1 => '%slug:title',
      2 => 'Arrangementer',
      3 => '%tid:name',
    ),
    'paths' => array(
      0 => 'libraries',
      1 => 'node/%slug:nid',
      2 => 'bibliotek/%slug/arrangementer',
      3 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'slug' => array(
        'position' => 1,
        'argument' => 'slug',
        'settings' => array(
          'identifier' => 'Node: Ding library slug',
        ),
      ),
      'tid' => array(
        'position' => 3,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vids' => array(
            3 => '3',
            14 => 0,
            12 => 0,
            1 => 0,
            7 => 0,
            9 => 0,
            10 => 0,
            4 => 0,
            5 => 0,
            6 => 0,
            2 => 0,
            13 => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['bibliotek_arrangementer_arrangement'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'biblioteker';
  $path_breadcrumb->name = 'Biblioteker';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Biblioteker',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => 'libraries',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'slug',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_library' => 'ding_library',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['biblioteker'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'biblioteker_arrangementer';
  $path_breadcrumb->name = 'Biblioteker - arrangementer';
  $path_breadcrumb->path = 'bibliotek/%slug/arrangementer';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Biblioteker',
      1 => '%slug:title',
      2 => 'Arrangementer',
    ),
    'paths' => array(
      0 => 'libraries',
      1 => 'node/%slug:nid',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'slug' => array(
        'position' => 1,
        'argument' => 'slug',
        'settings' => array(
          'identifier' => 'Node: Ding library slug',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['biblioteker_arrangementer'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'biblioteker_medarbejdere';
  $path_breadcrumb->name = 'Biblioteker - medarbejdere';
  $path_breadcrumb->path = 'bibliotek/%slug/personale';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Biblioteker',
      1 => '%slug:title',
      2 => 'Medarbejdere',
    ),
    'paths' => array(
      0 => 'libraries',
      1 => 'node/%slug:nid',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'slug' => array(
        'position' => 1,
        'argument' => 'slug',
        'settings' => array(
          'identifier' => 'Node: Ding library slug',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['biblioteker_medarbejdere'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'huskeliste';
  $path_breadcrumb->name = 'Huskeliste';
  $path_breadcrumb->path = 'user/%user/bookmarks';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%user:name',
      1 => 'Huskeliste',
    ),
    'paths' => array(
      0 => 'user',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'user' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['huskeliste'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'l_n';
  $path_breadcrumb->name = 'Lån';
  $path_breadcrumb->path = 'user/%user/status/loans';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%user:name',
      1 => 'Lån',
    ),
    'paths' => array(
      0 => 'user',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'user' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['l_n'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'l_nestatus';
  $path_breadcrumb->name = 'Lånestatus';
  $path_breadcrumb->path = 'user/%user';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%user:name',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'user' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['l_nestatus'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'materialesamling';
  $path_breadcrumb->name = 'Materialesamling';
  $path_breadcrumb->path = 'ting/collection/%number';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'number' => array(
        'position' => 2,
        'argument' => 'string',
        'settings' => array(
          'identifier' => 'String',
          'use_tail' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['materialesamling'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'mellemv_rende';
  $path_breadcrumb->name = 'Mellemværende';
  $path_breadcrumb->path = 'user/%user/status/debts';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%user:name',
      1 => 'Mellemværende',
    ),
    'paths' => array(
      0 => 'user',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'user' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['mellemv_rende'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nyheder';
  $path_breadcrumb->name = 'Nyheder';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Nyheder',
      1 => '%node:field-ding-news-category:name',
      2 => '%node:title',
    ),
    'paths' => array(
      0 => 'nyheder',
      1 => '%node:field-ding-news-category:url',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'slug',
        'settings' => array(
          'identifier' => 'Node: Ding library slug',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_news' => 'ding_news',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['nyheder'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'nyhedskategorisider';
  $path_breadcrumb->name = 'Nyhedskategorisider';
  $path_breadcrumb->path = 'taxonomy/term/%term';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Nyheder',
      1 => '%term:name',
    ),
    'paths' => array(
      0 => 'nyheder',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'term' => array(
        'position' => 2,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'tid',
          'vids' => array(
            6 => '6',
            14 => 0,
            12 => 0,
            1 => 0,
            7 => 0,
            9 => 0,
            10 => 0,
            3 => 0,
            4 => 0,
            5 => 0,
            2 => 0,
            13 => 0,
          ),
          'breadcrumb' => 1,
          'transform' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['nyhedskategorisider'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'paa_nettet';
  $path_breadcrumb->name = 'Paa nettet';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'På nettet',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => 'node/1728',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'slug',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_eresource' => 'ding_eresource',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['paa_nettet'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'rediger_brugerprofil';
  $path_breadcrumb->name = 'Rediger brugerprofil';
  $path_breadcrumb->path = 'user/%user/edit';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%user:name',
      1 => 'Redigér brugerprofil',
    ),
    'paths' => array(
      0 => 'user',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'user' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['rediger_brugerprofil'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'reserveringer';
  $path_breadcrumb->name = 'Reserveringer';
  $path_breadcrumb->path = 'user/%user/status/reservations';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%user:name',
      1 => 'Reserveringer',
    ),
    'paths' => array(
      0 => 'user',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'user' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['reserveringer'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 's_geresultat';
  $path_breadcrumb->name = 'Søgeresultat';
  $path_breadcrumb->path = 'search/ting/%query';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Søgning: %query',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'query' => array(
        'position' => 2,
        'argument' => 'string',
        'settings' => array(
          'identifier' => 'Søgning',
          'use_tail' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['s_geresultat'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 's_gning_p_hjemmsiden';
  $path_breadcrumb->name = 'Søgning på hjemmsiden';
  $path_breadcrumb->path = 'search/node/%query';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Søgning på hjemmsiden: %query',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'query' => array(
        'position' => 2,
        'argument' => 'string',
        'settings' => array(
          'identifier' => 'String',
          'use_tail' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['s_gning_p_hjemmsiden'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'ting_object';
  $path_breadcrumb->name = 'Ting Object';
  $path_breadcrumb->path = 'ting/object/%number';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'number' => array(
        'position' => 2,
        'argument' => 'string',
        'settings' => array(
          'identifier' => 'String',
          'use_tail' => 0,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['ting_object'] = $path_breadcrumb;

  return $export;
}
