(function($) {
  console.log('file is loading');
  Drupal.behaviors.selectStudentOrg = {
    attach: function(context, settings) {
      $('#edit-student-org-student-org', context).once('selectStudentOrg', function() {
        $("select").chosen({
          search_contains: true
        });
      });
    }
  };
})(jQuery);
