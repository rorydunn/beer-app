<?php
/**
 * @file
 * beer_user_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beer_user_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
