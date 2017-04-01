#include<stdio.h>

int main(void)
{
	double i[] = {1.0, 2.0};
	double *p = i;
	int x = (int) p;
	++p;

	printf("%d", (int) p - x);
}