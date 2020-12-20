<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="panel panel-default">
  <div class="panel-heading" role="tab" id="<?php print $section_id; ?>-heading">
    <?php if (!empty($title)): ?>
      <h2 class="panel-title">
        <a role="button" class="collapsed" data-toggle="collapse" data-parent="#<?php print $view_name; ?>" href="#<?php print $section_id; ?>" aria-expanded="false" aria-controls="<?php print $section_id; ?>">
          <?php print $title; ?>
        </a>
      </h2>
    <?php endif; ?>
  </div>
  <div id="<?php print $section_id; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="<?php print $section_id; ?>-heading'">
    <div class="panel-body">
      <div class="flex-col-3">
        <?php foreach ($rows as $id => $row): ?>
          <?php print $row; ?>
        <?php endforeach; ?>
      </div>
    </div>
  </div>
</div>

