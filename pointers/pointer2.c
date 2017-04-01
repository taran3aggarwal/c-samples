// pointer2.c:
#include<stdio.h>

int main(void)
{
	int arr[] = {1, 2, 3, 4};
	int *p = arr;
	// p = &arr[0];

	printf("*P = %d\n", *p);

	p++;
	printf("*P = %d\n", *p);

	return 0;
}