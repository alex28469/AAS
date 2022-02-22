#include <unistd.h>
#include "../lib/my_lib.h"
#include <stdio.h>

int my_strlen(char*);

int main(int argc, char* argv[]) {
	char* str = "test de char*";
	int test;

	my_putstr(str);
	printf("%d\n", my_strlen(str));

	return 0;
}
