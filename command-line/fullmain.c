// fullmain.c: prints command line arguments and environment variables
// complete syntax of main: ReturnType main([int argc, char *argv[][, char **envp]])
#include<stdio.h>

int main(int argc, char *argv[], char **envp)
{
	int i;

	printf("The number of arguments are: %d.\n", argc);
	printf("The command line arguments ars as follows:\n");

	for (i = 0; i < argc; ++i) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	i = 0;

	printf("\nThe environment variables are\n");

	while(envp[i]) {
		printf("%s\n", envp[i]);
		i++;
	}

	return 0;
}