// write a program to calculate GCD of two numbers
#include<stdio.h>

int main(void)
{
	int num1, num2, x;
	int dividend, divisor, rem;

	printf("enter the first number: ");
	scanf("%d", &num1);

	printf("enter the second number: ");
	scanf("%d", &num2);

	if (num1 > num2) {
		dividend = num1;
		divisor = num2;
	} else {
		dividend = num2;
		divisor = num1;
	}

	while(divisor) {
		rem = dividend % divisor;
		dividend = divisor;
		divisor = rem;
	}

	printf("GCD of %d and %d is %d.\n", num1, num2, dividend);

	return 0;
}