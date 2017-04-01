#include<stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 2) {
		printf("The supplied argument is %s \n", argv[1]);
		printf("%s", argv[0]);
		//printf("%s", argv[1]);
	} else if (argc > 2) {
		printf("Too many arguments.\n");
	} else {
		printf("One argument is expected.\n");
	}

	return 0;
}