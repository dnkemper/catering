(function($) {
  Drupal.behaviors.iconSelector = {
    attach: function(context, settings) {
      $('#edit-fa-icon', context).once('fa-selctor', function() {
        $("#edit-fa-icon").iconpicker({ placement: 'top'} );
      });
    }
  };
})(jQuery);
