/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b option; if 0, dmenu appears at bottom */
static int topbar = 1;

/* -F option; if 0, dmenu doesn't use fuzzy matching */
static int fuzzy = 1;

/* -i option; if not 0, dmenu forces case insensitivity */
static int conf_case_insensitive = 1;

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 20;

/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] = { "JetBrains Mono Medium:size=11" };

/* -p option; prompt to the left of input field */
static const char *prompt = NULL;

/* center */
static const int conf_center = 1;

/* default colors */
static char *colors[SchemeLast][2] = {
	/* [Key] = { "#fgcolor", "#bgcolor" }, */
	[SchemeNorm] = { "#FBF1C7", "#282828" },
	[SchemeSel] = { "#282828", "#FBF1C7" },
	[SchemeSelHighlight] = { "#282828", "#FABD2F" },
	[SchemeNormHighlight] = { "#FABD2F", "#282828" },
	[SchemeOut] = { "#282828", "#9D0006" },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;
