/**
 * @file
 * Venue views AJAX modification.
 */

(function($) {
  Drupal.cateringVenueViewsAjaxInit = function() {
    $(document).ajaxSend(function(event, jqxhr, settings) {
      // This was a views AJAX request.
      if (settings.url == '/views/ajax') {
        $('.view-filters input[type="checkbox"]').attr('disabled', true);
      }
    });

    $(document).ajaxComplete(function(event, jqxhr, ajaxOptions) {
      var response = $.parseJSON(jqxhr.responseText);

      // This was a views AJAX request.
      if (response[0].settings.views) {
        $('.view-filters input[type="checkbox"]').attr('disabled', false);
      }
    });
  };

  // Attach cateringVenueViews behavior.
  Drupal.behaviors.cateringVenueViews = {
    attach: function(context, settings) {
      $('#main', context).once('cateringVenueViews', function() {
        Drupal.cateringVenueViewsAjaxInit();
      });
    }
  };

})(jQuery);
