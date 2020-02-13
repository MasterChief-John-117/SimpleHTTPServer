#include <stdio.h>
#include "parse.h"
#include "strings.h"

int hasflag(char* flag, int argc, char** argv) {
	
	for (int i = 1; i < argc; i++) {
		printf("%s\n", trimleft(argv[i], "-"));
	}
	
	return 2;
}

int getvalue(char* flag) {
	return 0;
}	
