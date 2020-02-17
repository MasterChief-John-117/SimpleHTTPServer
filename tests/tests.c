#include <stdio.h>
#include "../strings.h"
#include "tests.h"

int main() {
	int failures = 0;
	failures += haschar_true();
	failures += haschar_false();
	failures += strspan_0();
	failures += strspan_2();
	printf("strings - Failed Tests: %d\n", failures);
	return failures;
}
