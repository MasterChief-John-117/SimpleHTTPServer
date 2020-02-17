#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "strings.h"


int haschar(const char* input, const char* delims) {
	if (input == NULL || delims == NULL) {
		return 0;
	}
	
	for (int i = 0; i < strlen(input); i++) {
		for (int j = 0; j < strlen(delims); j++) {
			if (input[i] == delims[j]) {
				return 1;
			}
		}
	}
	return 0;
}

int strspan(const char* input, const char* delims) {
	if (delims == NULL || input == NULL) {
		return 0;
	}
	int count = 0;
	for (int i = 0; i < strlen(input); i++) {
		int oldCount = count;
		for (int j = 0; j < strlen(delims); j++) {
			if (input[i] == delims[j]) {
				count++;
			}
		}
		if (oldCount == count) {
			return count;
		}

	}
	return count;
}

char* trimleft(char* input, const char* delims) {
	if (delims == NULL) {
		delims = " \n\r\t";
	}
	return input + strspan(input, delims);
	
}

