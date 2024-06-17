//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"vap-forecast",		900,			13},
	{"",		"vap-memory",		5,			14},
	{"",		"vap-cpubars",		1,			15},
	{"",		"vap-nettraf",		1,			16},
	{"",		"vap-volume",		1,			10},
	{"",		"vap-clock",		60,			1},
	{"",		"vap-internet",		5,			4}
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
