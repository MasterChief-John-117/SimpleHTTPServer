#include <stdlib.h>
#include <string.h>
#include "strings.h"

int strspan(const char* left, const char* right) {
	if (left == NULL || right == NULL) {
		return 0;
	}
	int count = 0;
	for (int i = 0; i < strlen(left) && i < strlen(right); i++) {
		if (left[i] == '\0' || right[i] == '\0') {
			return count;
		}
		if (left[i] != right[i] ){
			return count;
		}
		count++;
	}
	return count;
}

char* trimleft(char* input, const char* delims) {
	if (delims == NULL) {
		delims = " \n\r\t";
	}
	size_t totrim = strspan(input, delims);
	memmove(input, input + totrim, strlen(input) + 1 - totrim);
	return input;
}
