#include<stdio.h>

void sum(int, int);

int main(void)
{	
	int num1, num2;

	printf("enter first number: ");
	scanf("%d", &num1);

	printf("enter second number: ");
	scanf("%d", &num2);

	sum(num1, num2);

	return 0;
}

void sum(int m, int n)
{
	int sum = m + n;

	printf("sum of %d and %d is %d", m, n, sum);
}