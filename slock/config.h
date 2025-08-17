/* user and group to drop privileges to */
static const char *user  = "marcelo";
static const char *group = "marcelo";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#002b36",   /* during input */
	[FAILED] = "#cb4b16",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
