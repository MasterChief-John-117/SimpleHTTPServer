#include <stdio.h>
#include "parse.h" 

int main(int argc, char** argv) {
	puts("Options:");
	printf("%d\n", hasflag("screm", argc, argv));
}

