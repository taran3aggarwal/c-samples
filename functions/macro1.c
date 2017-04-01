#include<stdio.h>

#define MAX(a, b) a > b ? a : b
#define MIN(a, b) a < b ? a : b

int main(void)
{
	int a, b;
	int max, min;

	printf("enter two numbers: ");
	scanf("%d %d", &a, &b);

	max = MAX(a, b);
	printf("%d\n", max);

	printf("%d", MIN(a, b));

	return 0;
}