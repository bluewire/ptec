<?php
/**
 * @file
 * products.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function products_default_rules_configuration() {
  $items = array();
  $items['rules_create_product_display'] = entity_import('rules_config', '{ "rules_create_product_display" : {
      "LABEL" : "Create Product Display",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : [ "commerce_product_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "commerce-product:type" ], "value" : "led_thru_hole" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "led_thru_hole_display",
              "param_title" : "[commerce-product:title]",
              "param_author" : [ "commerce-product:creator" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-product-reference" ],
            "value" : [ "commerce-product" ]
          }
        }
      ]
    }
  }');
  return $items;
}
