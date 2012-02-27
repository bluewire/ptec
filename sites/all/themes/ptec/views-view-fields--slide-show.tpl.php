<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php
/**
 * key|value pairs for slide layouts
 * 1|Full Image
 * 2|Full Description
 * 3|Split Description Left and Image Right
 * 4|Split Image Left and Description Right
 */
?>

<?php if($fields['field_featured_slide_layout']->content == '1') { ?>
  <div class="slider-item">
    <div class="content">
      <?php print $fields['field_featured_slide_image']->content; ?>
    </div>
  </div>
<?php } ?>

<?php if($fields['field_featured_slide_layout']->content == '2') { ?>
  <div class="slider-item">
    <div class="content">
      <?php print $fields['field_featured_slide_desc']->content; ?>
      <div class="more">
        <?php print $fields['field_featured_slide_link']->content; ?>
      </div>
    </div>
  </div>
<?php } ?>

<?php if($fields['field_featured_slide_layout']->content == '3') { ?>
  <div class="slider-item">
    <div class="content">
      <div class="fr pl">
        <?php print $fields['field_featured_slide_image']->content; ?>
      </div>
      <?php print $fields['field_featured_slide_desc']->content; ?>
      <div class="more">
        <?php print $fields['field_featured_slide_link']->content; ?>
      </div>
    </div>
  </div><?php } ?>

<?php if($fields['field_featured_slide_layout']->content == '4') { ?>
  <div class="slider-item">
    <div class="content">
      <div class="fl pr">
        <?php print $fields['field_featured_slide_image']->content; ?>
      </div>
      <?php print $fields['field_featured_slide_desc']->content; ?>
      <div class="more">
        <?php print $fields['field_featured_slide_link']->content; ?>
      </div>
    </div>
  </div>
<?php } ?>
