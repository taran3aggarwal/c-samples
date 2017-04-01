#include<stdio.h>

void change(int *p, int k)
{
	*p = 50;
	k = 55;
}

int main(void)
{
	int i = 100, k = 110;
	int arr[2] = {10, 20};
	int *p = arr;

	printf("I = %d and K = %d\n", i, k);

	change(&i, k);
	printf("I = %d and K = %d\n", i, k);

	printf("%d\n", *p);
	
	p++;
	printf("%d", *p);
}

