//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"vap-memory",		5,			14},
	{"",		"vap-cpu",		1,			15},
	{"",		"vap-volume",		1,			10},
	{"",		"vap-clock",		60,			1},
	{"",		"vap-internet",		5,			4}
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ";
static unsigned int delimLen = 5;
