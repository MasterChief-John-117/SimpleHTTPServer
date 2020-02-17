#include <stdio.h>
#include "../strings.h"

int haschar_true() {
	if (haschar("aaaba", "b")) {
		puts("strings - haschar_true: PASSES");
		return 0;
	}
	else {
		puts("strings - haschar_true: FAILED");
		return 1;
	}
}

int haschar_false() {
	if (haschar("aaaba", "c")) {
		puts("strings - haschar_false: FAILED");
		return 1;
	}
	else {
		puts("strings - haschar_false: PASSES");
		return 0;
	}
}

int strspan_0() {
	if (strspan("aaaba", "c") != 0) {
		puts("strings - strspan_0: FAILED");
		return 1;
	}
	else {
		puts("strings - strspan_0: PASSES");
		return 0;
	}
}

int strspan_2() {
	if (strspan("aacba", "a") != 2) {
		printf("strings - strspan_2: FAILED (Expected 2, got %d\n)", strspan("aacba", "a"));
		return 1;
	}
	else {
		puts("strings - strspan_2: PASSES");
		return 0;
	}
}


