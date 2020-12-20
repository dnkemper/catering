<?php

/**
 * @file
 * Radix theme implementation to display a node.
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
  <?php print render($content['field_page_header_featured_image']); ?>
  <div class="panel-heading yellow-flair">
    <?php print render($title_prefix); ?>
    <?php if (!$page && !empty($title)): ?>
      <div<?php print $title_attributes; ?>>
        <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
      </div>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
  </div>
</article>
