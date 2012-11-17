<?php

/**
 * @file
 * Plugin to provide access control based upon ca_faq admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('FAQ: node type'),
  'description' => t('Control access by faq node type.'),
  'callback' => 'ca_faq_node_template_access_check',
  'settings form' => 'ca_faq_node_template_access_settings',
  'settings form submit' => 'ca_faq_node_template_access_settings_submit',
  'summary' => 'ca_faq_node_template_access_summary',
);

/**
 * Settings form for the 'by faq node type' access plugin.
 */
function ca_faq_node_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_faq_node_template'] = array(
    '#type' => 'select',
    '#title' => t('FAQ\'s node template'),
    '#options' => array(
      'ca_faq_node_template_one' => t('Template one'),
      'ca_faq_node_template_two' => t('Template two'),
      'ca_faq_node_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_faq_node_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_faq_node_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_faq_node_template_access_check($conf, $context) {
  return $conf['ca_faq_node_template'] == variable_get('ca_faq_node_template', 'ca_faq_node_template_one');
}

/**
 * Provide a summary description based upon the checked faq node type.
 */
function ca_faq_node_template_access_summary($conf, $context) {
  if ($conf['ca_faq_node_template'] == 'ca_faq_node_template_one') {
    $template = t('Template one');
  }
  elseif ($conf['ca_faq_node_template'] == 'ca_faq_node_template_two') {
    $template = t('Template two');
  }
  else {
    $template = t('Template three');
  }

  return t('Display template is set to: ' . $template);
}
