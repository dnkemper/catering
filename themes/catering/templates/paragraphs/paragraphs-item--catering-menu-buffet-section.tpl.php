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
  <div class="pos-abs pattern-overlay black-thread-light opacity-5"></div>
  <div class="pos-abs gradient-overlay"></div>
  <div class="container-smooth">
    <header class="menu-section-header">
      <?php print render($content['field_menu_heading_prefix']); ?>
      <h2 class="menu-section-title"><?php print render($content['field_catering_menu_heading']); ?></h2>
      <?php print render($content['field_body']); ?>
    </header>
    <?php print render($content); ?>
  </div>
</div>
