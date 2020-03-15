/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Cascadia Code:size=12"
};
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/* [Key] = { "#fgcolor", "#bgcolor" }, */
	[SchemeNorm] = { "#FBF1C7", "#282828" },
	[SchemeSel] =  { "#282828", "#FBF1C7" },
	[SchemeSelHighlight] = { "#282828", "#FABD2F" },
	[SchemeNormHighlight] = { "#FABD2F", "#282828" },
	[SchemeOut] =  { "#282828", "#9D0006" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
