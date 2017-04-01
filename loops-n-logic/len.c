#include<stdio.h>

int main(void)
{
	char text[] = "information";
	int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	int len = sizeof(x) / sizeof(int);
	printf("Size of int array is %d.\n", len);
	
	for(len = 0; text[len] != '\0'; len++);
	printf("Size of char array is %d.\n", len);

	return 0;
}