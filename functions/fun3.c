#include<stdio.h>

int sum(void);

int main(void)
{
	int res = sum();

	printf("sum is %d\n", res);

	return 0;
}

int sum(void)
{
	int num1, num2, sum;

	printf("enter first number: ");
	scanf("%d", &num1);

	printf("enter second number: ");
	scanf("%d", &num2);

	sum = num1 + num2;

	return sum;
	
	// return num1 + num2;
}