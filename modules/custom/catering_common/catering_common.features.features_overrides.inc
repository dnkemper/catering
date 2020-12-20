<?php
/**
 * @file
 * catering_common.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function catering_common_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_html.settings|buttons|btbutton"] = array(
    'btbutton' => 1,
  );
  $overrides["wysiwyg.filtered_html.settings|buttons|default|CreateDiv"] = 1;
  $overrides["wysiwyg.filtered_html.settings|buttons|default|Styles"] = 1;
  $overrides["wysiwyg.filtered_html.settings|stylesSet"] = 'No Styles=div.none
          Alert Success=div.alert.alert-success
          Alert Info=div.alert.alert-info
          Alert Warning=div.alert.alert-warning
          Alert Danger=div.alert.alert-danger';
  $overrides["wysiwyg.full_html.settings|buttons|btbutton"] = array(
    'btbutton' => 1,
  );
  $overrides["wysiwyg.full_html.settings|buttons|default|CreateDiv"] = 1;
  $overrides["wysiwyg.full_html.settings|buttons|default|Styles"] = 1;
  $overrides["wysiwyg.full_html.settings|stylesSet"] = 'No Styles=div.none
          Alert Success=div.alert.alert-success
          Alert Info=div.alert.alert-info
          Alert Warning=div.alert.alert-warning
          Alert Danger=div.alert.alert-danger';

 return $overrides;
}
