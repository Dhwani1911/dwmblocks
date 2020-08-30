//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"   ","battery", 60, 1},

  {"; ","date '+%l:%M %P %a %b %e'", 60, 2},

	{"           ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	180,		3},

  {"           ","ssid", 60, 6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
