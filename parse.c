#include <stdio.h>
#include <string.h>
#include "parse.h"
#include "strings.h"

int hasflag(char* flag, int argc, char** argv) {

	printf("%d\n", strspan("a", "a"));
	printf("%s\n", trimleft("--screm", "- "));

	for (int i = 1; i < argc; i++) {
		if (strspan(flag, trimleft(argv[i], "- "))+1 == strlen(flag)) {
			return 1;
		}	
	}
	
	return 0;
}

int getvalue(char* flag) {
	return 0;
}	
