#include<stdio.h>

int main(void)
{
	void sum(void);

	sum();

	return 0;
}

void sum(void)
{
	int num1, num2, sum;

	printf("enter first number: ");
	scanf("%d", &num1);

	printf("enter second number: ");
	scanf("%d", &num2);

	sum = num1 + num2;

	printf("sum of %d and %d is %d", num1, num2, sum);
}