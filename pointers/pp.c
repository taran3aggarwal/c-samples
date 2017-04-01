#include<stdio.h>

int main(void)
{
	int x = 50;
	int *p = &x;

	printf("*&x = %u and &x = %p\n", *&x, &x);
	printf("*&p = %p and &*p = %p\n", *&p, &*p);

	return 0;
}