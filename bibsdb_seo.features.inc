<?php
/**
 * @file
 * bibsdb_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_seo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
}
