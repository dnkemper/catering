/**
* Renders the pickadate date picker for date field.
*/
(function ($) {
  Drupal.behaviors.studentOrgEventDatePicker = {
    attach: function (context, settings) {
      $('.field-name-field-commerce-event-date', context).once('studentOrgEventDatePicker', function () {

        // Disable the next 5 business days.
        var disabledDates = [];
        var i = 0;
        var today = new Date();
        // getDay may return undesirable values in some instances.
        dayIndex = today.getDay();
        if (dayIndex == 6) {
          var itterate = 9;
        }
        else if (dayIndex == 0) {
          var itterate = 8;
        }
        else {
          var itterate = 7;
        }
        while (i < itterate) {
          date = new Date();
          date.setDate(today.getDate() + i);
          disabledDates.push(date);
          i++;
        }

        // Apply the studentOrgEventDatePicker effect to the elements only once.
        $('input.date-clear').pickadate({
          format: 'mm/dd/yyyy',
          //formatSubmit: 'mm/dd/yyyy - 00:00',
          disable: disabledDates
        });
      });
    }
  };
})(jQuery);
