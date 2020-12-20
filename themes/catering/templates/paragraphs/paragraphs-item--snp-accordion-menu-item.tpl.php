<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
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
    <div class="panel-heading" role="tab" id="heading-<?php print $accordion_id; ?>">
      <div class="panel-title">
        <a class="accordion-trigger collapsed" data-parent="<?php print $parent_id; ?>" data-toggle="collapse" href="#<?php print $accordion_id; ?>">
          <span class="accordion-title"><?php print render($content['field_snp_accordion_menu_title']); ?></span>
          <i class="accordion-indicator fa fa-times" aria-hidden="true"></i>
        </a>
      </div>
    </div>
    <div id="<?php print $accordion_id; ?>" class="panel-collapse collapse" role="tabpanel" arialabelby="heading-<?php print $accordion_id; ?>">
      <div class="panel-body">
      <?php print render($content['field_accordion_menu_description']); ?>
        <?php print render($content['field_snp_accordion_menu_body']); ?>
      </div>
  </div>
</div>
