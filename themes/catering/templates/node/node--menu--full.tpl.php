<?php

/**
 * @file
 * Radix theme implementation to display a menu.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>


  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page && !empty($title)): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="container-smooth">
    <?php print render($content['field_menu_disclaimer']); ?>
  </div>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
  
    <div class="container-smooth">
      <div class="panel panel-default">
        <div class="panel-heading" role="tab" id="policiesHeader-<?php print $accordion_id; ?>">
            <h4 class="panel-title">
            <a class="accordion-trigger collapsed" data-parent="#accordion" data-toggle="collapse" href="#policiesContent" aria-controls="policiesContent">
                Policies and Procedures
                <i class="accordion-indicator fa fa-times" aria-hidden="true"></i>
              </a>
            </h4>
        </div>
        <div id="policiesContent" class="accordion-collapse collapse" role="tabpanel" aria-labelledby="policiesHeader">
            <div class="panel-body">
              <?php print render($policies['body']); ?>
            </div>
        </div>
      </div>
    </div>


  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
