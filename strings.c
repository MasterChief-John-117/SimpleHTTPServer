#include <stdlib.h>
#include <string.h>
#include "strings.h"

char* trimleft(char* input, const char* delims) {
	if (delims == NULL) {
		delims = " \n\r\t";
	}
	size_t totrim = strspn(input, delims);
	memmove(input, input + totrim, strlen(input) + 1 - totrim);
	return input;
}
