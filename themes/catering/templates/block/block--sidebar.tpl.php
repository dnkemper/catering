<?php

/**
 * @file
 * Template for a block.
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="panel panel-default">

    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
      <div class="panel-heading">
        <h4 class="block__title panel-title"<?php print $title_attributes; ?>><?php print $block->subject ?></h4>
      </div>
    <?php endif;?>
    <?php print render($title_suffix); ?>

    <div class="block__content panel-body"<?php print $content_attributes; ?>>
      <?php print $content ?>
    </div>
  </div>
</div>
