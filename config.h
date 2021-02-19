/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack-11"
};


#define MONO_BG "#090909"
#define MONO_FG "#dd9d5c"
static const char col_dark[]        = MONO_BG; // bg0 from athens-theme
static const char col_light[]       = MONO_FG;
static const char col_hi[]          = MONO_FG;

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
     	           /* fg         bg       */
	[SchemeNorm] = { col_light, col_dark },
	[SchemeSel]  = { col_dark,  col_hi },
	[SchemeOut]  = { col_dark,  col_light }, // press Ctrl+Return to select multiple items
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 20;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 1;
