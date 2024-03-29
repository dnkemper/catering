<?php

/**
 * @file
 * Menu header.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print render($content['field_buffet_image']); ?>

  <div class="menu-buffet-group">
    <?php if (!empty($content['field_menu_buffet_name'])): ?>
      <?php print render($content['field_menu_buffet_name']); ?>
    <?php endif; ?>

    <?php if (!empty($content['field_menu_item_cost'])): ?>
      <?php print render($content['field_menu_item_cost']); ?>
    <?php endif; ?>

    <?php if (!empty($content['field_body'])): ?>
      <?php print render($content['field_body']); ?>
    <?php endif; ?>
    
  </div>

  <?php print render($content); ?>

</div>
