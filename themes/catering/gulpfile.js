// Include gulp.
var gulp = require('gulp');
var config = require('./config.json');

// Include plugins.
var sass = require('gulp-sass');
var imagemin = require('gulp-imagemin');
var pngcrush = require('imagemin-pngcrush');
var shell = require('gulp-shell');
var plumber = require('gulp-plumber');
var notify = require('gulp-notify');
var autoprefixer = require('gulp-autoprefixer');
var glob = require('gulp-sass-glob');
var uglify = require('gulp-uglify');
var concat = require('gulp-concat');
var rename = require('gulp-rename');
var sourcemaps = require('gulp-sourcemaps');

// CSS.
gulp.task('css', function() {
  return gulp.src(config.css.src)
    .pipe(glob())
    .pipe(plumber({
      errorHandler: function (error) {
        notify.onError({
          title:    "Gulp",
          subtitle: "Failure!",
          message:  "Error: <%= error.message %>",
          sound:    "Beep"
        }) (error);
        this.emit('end');
      }}))
    .pipe(sourcemaps.init())
    .pipe(sass({
      style: 'compressed',
      errLogToConsole: true,
      includePaths: config.css.includePaths
    }))
    .pipe(autoprefixer(['last 2 versions', '> 1%', 'ie 9', 'ie 10']))
    .pipe(sourcemaps.write('./'))
    .pipe(gulp.dest(config.css.dest))
    .pipe(gulp.dest(config.css.destdocs));
});

// Waypoints.
gulp.task('waypoints', function() {
   gulp.src('./bower_components/waypoints/lib/jquery.waypoints.js')
   .pipe(gulp.dest('./js/waypoints'));
});

// Typeahead.
gulp.task('typeahead', function() {
   gulp.src('./bower_components/typeahead.js/dist/typeahead.jquery.min.js')
   .pipe(gulp.dest('./js'));
});

// JS
gulp.task('js', function() {
  return gulp.src(config.js.src)
    .pipe(sourcemaps.init())
    .pipe(concat(config.js.file))
    .pipe(plumber({
      errorHandler: function (error) {
        notify.onError({
          title:    "JS",
          subtitle: "Failure!",
          message:  "Error: <%= error.message %>",
          sound:    "Beep"
        }) (error);
        this.emit('end');
      }}))
    .pipe(uglify())
    .pipe(sourcemaps.write('./'))
    .pipe(gulp.dest(config.js.dest));
});

// Compress images.
gulp.task('images', function () {
  return gulp.src(config.images.src)
    .pipe(imagemin({
      progressive: true,
      svgoPlugins: [{ removeViewBox: false }],
      use: [pngcrush()]
    }))
    .pipe(gulp.dest(config.images.dest));
});

// Fonts.
gulp.task('fonts', function() {
  return gulp.src(config.fonts.src)
    .pipe(gulp.dest(config.fonts.dest));
});

// Static Server + Watch
gulp.task('serve', ['css', 'js', 'fonts'], function() {
  gulp.watch(config.js.src, ['js']);
  gulp.watch(config.css.src, ['css']);
  gulp.watch(config.images.src, ['images']);
});

// Run drush to clear the theme registry.
gulp.task('drush', shell.task([
  'drush cache-clear theme-registry'
]));

// Default Task
gulp.task('default', ['serve']);
