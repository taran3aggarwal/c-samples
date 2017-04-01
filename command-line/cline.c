#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3) {
		x = atoi(argv[1]);
		y = atoi(argv[2]);
	} else {
		perror("You must pass at least two intergers at command line.\n");
		return -1;
	}

	printf("%d + %d = %d\n", x, y, (x + y));

	return 0;
}