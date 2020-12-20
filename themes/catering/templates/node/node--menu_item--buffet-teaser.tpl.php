<?php
/**
 * @file
 * Radix theme implementation to display a menu item node (teaser).
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
hide($content['comments']);
hide($content['links']);
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <header class="menu-item-header">
    <div class="title-nutrition">
      <span<?php print $title_attributes; ?>><?php print $title; ?></span>
      <?php print render($content['field_dietary_indicators']); ?>
    </div>
    <?php if($content['field_menu_item_cost']): ?>
      <span class="menu-item-leader"></span>
      <?php print render($content['field_menu_item_cost']); ?>
    <?php endif; ?>
  </header>
  <?php print render($content); ?>
</article>
