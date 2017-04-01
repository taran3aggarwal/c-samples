#include<stdio.h>

int main(void)
{
	int arr[] = {1, 2, 3};
	int *p = arr;

	printf("%d (%p or %X)\n", *p, p, &arr[0]);

	++p;
	printf("%d (%p or %X)\n", *p, p, &arr[1]);

	return 0;
}