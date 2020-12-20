<?php

/**
 * @file
 * UHD Footer block template.
 *
 * @ingroup themeable
 */
?>
<div id="catering-footer" class="catering-footer">
  <div class="row">
    <div class="block col-md-3">
      <a href="https://catering.uiowa.edu">
        <img src="<?php print $logo; ?>" alt="University Catering" title="University Catering" />
      </a>
    </div>
    <?php if(isset($custom_menu_links)): ?>
      <div class="block col-md-3">
        <div class="block-title">
          <h2>Quick Links</h2>
        </div>
        <div class="block-content">
          <?php print $custom_menu_links; ?>
        </div>
      </div>
    <?php endif; ?>
    <?php if(isset($contact_us)): ?>
      <div class="block col-md-3">
        <div class="block-title">
          <h2>Contact Us</h2>
        </div>
        <div class="block-content">
          <?php print $contact_us; ?>
        </div>
      </div>
    <?php endif; ?>
    <?php if(isset($custom_menu_links)): ?>
      <div class="block col-md-3">
        <div class="block-title">
          <h2>Connect with us</h2>
        </div>
        <div class="block-content">
          <?php print $social_menu_links; ?>
        </div>
      </div>
    <?php endif; ?>
  </div>
  <div class="row">
    <?php foreach ($catering_site_links as $block): ?>
      <div class="block col-md-3">
        <div class="block-title">
          <h2><?php print $block['title']; ?></h2>
        </div>
        <div class="block-content">
          <?php print $block['content']; ?>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</div>
