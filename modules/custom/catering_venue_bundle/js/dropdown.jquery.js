(function($) {
  Drupal.behaviors.dropdownOpen = {
    attach: function(context, settings) {
      $('.views-exposed-widgets', context).once('dropdownOpen', function() {
        $('.dropdown-menu').click(function(e) {
            e.stopPropagation();
        });
      });
    }
  };
})(jQuery);
