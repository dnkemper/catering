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
hide($content['title']);
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if (!empty($content['field_person_photo'])): ?>
    <?php print render($content['field_person_photo']); ?>
  <?php endif; ?>

  <div class="panel-heading">
    <?php if (!empty($content['field_person_name'])): ?>
      <?php print render($content['field_person_name']); ?>
    <?php endif; ?>

    <?php if (!empty($content['field_person_title'])): ?>
      <?php print render($content['field_person_title']); ?>
    <?php endif; ?>

    <?php if (!empty($content['field_person_gender_pronoun'])): ?>
      <?php print render($content['field_person_gender_pronoun']); ?>
    <?php endif; ?>

    <?php if (!empty($content['field_person_languages'])): ?>
      <?php print render($content['field_person_languages']); ?>
    <?php endif; ?>
  </div>

  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($content); ?>
  </div>

</article>
