// args.c: prints command line arguments
// complete syntax of main: ReturnType main([int argc, char *argv[][, char **envp]])
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i;

	printf("Total number of arguments (argument count) = %d\n", argc);
	printf("Name of Program = \"%s\"\n\n", argv[0]);

	printf("Command line arguments (argument verctors) are\n");

	for(i = 0; i < argc; ++i) {
		puts(argv[i]);
	}

	return 0;
}