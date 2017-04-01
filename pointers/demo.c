#include<stdio.h>

int main(void)
{
	char *ptr = "geeksforgeeks";
	int arr[2] = {0, 1};

	printf("%c\n", *&*&*ptr);

	printf("First Element = %d\n",arr[0]);

	return 0;
}