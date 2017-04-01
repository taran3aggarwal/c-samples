#include<stdio.h>

int main()
{
	int i;
	
	printf("D\t C\t  O\t H\n");
	printf("-----------------\n");

	for (i = 0; i < 256; i++) {
		printf("%3d\t%c\t%3o\t%2X\n", i, i, i, i);
	}
}