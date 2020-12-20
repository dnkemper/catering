/**
* Renders the pickadate date picker for date field.
*/
(function ($) {
  Drupal.behaviors.studentOrgEventTimePicker = {
    attach: function (context, settings) {
      $('.field-name-field-commerce-time-food', context).once('studentOrgEventTimePicker', function () {
        // Apply the studentOrgEventDatePicker effect to the elements only once.
        $('#edit-commerce-fieldgroup-pane-commerce-event-info-field-commerce-time-food-und-0-value').pickatime();
      });
      $('.field-name-field-commerce-time-event-end', context).once('studentOrgEventTimePicker', function () {
        // Apply the studentOrgEventDatePicker effect to the elements only once.
        $('#edit-commerce-fieldgroup-pane-commerce-event-info-field-commerce-time-event-end-und-0-value').pickatime();
      });
    }
  };
})(jQuery);
