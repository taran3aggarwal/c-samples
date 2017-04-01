#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	float f;

	if (argc > 1) {
		f = atof(argv[1]) * 2.0;

		++argv;
		printf("%s in %.2lg\n", *argv, f);

	}

	return 0;
}