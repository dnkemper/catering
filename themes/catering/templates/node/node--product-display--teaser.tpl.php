<?php

/**
 * @file
 * Radix theme implementation to display a product display node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */

// We hide the comments and links.
hide($content['comments']);
hide($content['links']);

// Hide content to be individually rendered in content region later.
hide($content['configure_button']);
hide($content['price_floor']);
hide($content['body']);
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="modal fade" id="<?php print $node->modal_id; ?>" tabindex="-1" role="dialog" aria-labelledby="<?php print $node->modal_id; ?>-label">
    <div class="modal-dialog" role="document">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title" id="<?php print $node->modal_id; ?>-label" aria-hidden="true"><?php print $title; ?></h4>
        </div>
        <div class="modal-body">
          <?php print render($content); ?>
        </div>
      </div>
    </div>
  </div>

  <div class="panel-body">
    <?php print render($title_prefix); ?>
    <?php if (!$page && !empty($title)): ?>
      <h3<?php print $title_attributes; ?>><?php print $title; ?></h3>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php print render($content['field_catering_delivery_type']); ?>
    <?php print render($content['body']); ?>
  </div>
  <div class="panel-footer">
    <?php print render($content['price_floor']); ?>
    <?php print render($content['configure_button']); ?>
  </div>
</article>
