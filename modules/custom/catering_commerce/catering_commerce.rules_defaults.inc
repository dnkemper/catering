<?php
/**
 * @file
 * catering_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function catering_commerce_default_rules_configuration() {
  $items = array();
  $items['commerce_checkout_catering_commerce_email_catering'] = entity_import('rules_config', '{ "commerce_checkout_catering_commerce_email_catering" : {
      "LABEL" : "Send an order notification e-mail catering",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "4",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout" ],
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "mail" : {
            "to" : "hsg-catering@uiowa.edu",
            "subject" : "New Catering Order",
            "message" : "A new student organization catering order has been submitted:\\r\\n\\r\\nStudent Organization: [commerce-order:field-commerce-student-org]\\r\\nEvent Date: [commerce-order:field-commerce-event-date]\\r\\nName: [commerce-order:field-commerce-billing-name]\\r\\nEmail: [commerce-order:field-commerce-billing-email]\\r\\nPhone: [commerce-order:field-commerce-billing-phone]\\r\\n\\r\\nYou may view the entire order here: [commerce-order:view-url]",
            "language" : [ "commerce-order:state" ]
          }
        }
      ]
    }
  }');
  $items['commerce_checkout_catering_commerce_email_org'] = entity_import('rules_config', '{ "commerce_checkout_catering_commerce_email_org" : {
      "LABEL" : "Send an order notification e-mail student org",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "4",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout" ],
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "mail" : {
            "to" : "[commerce-order:field-commerce-billing-email]",
            "subject" : "Thank you for your University Catering Order!",
            "message" : "Thank you for your Student Organization catering order submission! Your order has been sent to a Catering Sales Coordinator and the Student Organization Business Office.\\u00a0 A Catering Sales Coordinator will be in contact with you within 24 hours to confirm your order. Please call (319)-335-3116 or email us at Hsg-catering@uiowa.edu for any immediate questions regarding your upcoming order. ",
            "language" : [ "commerce-order:state" ]
          }
        }
      ]
    }
  }');
  return $items;
}
