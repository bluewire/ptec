<?php
/**
 * @file
 * contact_ptec.box.inc
 */

/**
 * Implements hook_default_box().
 */
function contact_ptec_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'google_voice';
  $box->plugin_key = 'simple';
  $box->title = 'Google Voice Widget';
  $box->description = 'Google voice widget';
  $box->options = array(
    'body' => array(
      'value' => '<object type="application/x-shockwave-flash" data="https://clients4.google.com/voice/embed/webCallButton" width="230" height="85"><param name="movie" value="https://clients4.google.com/voice/embed/webCallButton" /><param name="wmode" value="transparent" /><param name="FlashVars" value="id=476ff80aa3f9e6857d98e5cec6a76cdded810ef8&style=0" /></object>',
      'format' => 'full_html',
    ),
  );
  $export['google_voice'] = $box;

  return $export;
}
