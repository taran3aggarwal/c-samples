#include<stdio.h>

int sum(int, int);

int main(void)
{
	int num1, num2, res;

	printf("enter first number: ");
	scanf("%d", &num1);

	printf("enter second number: ");
	scanf("%d", &num2);

	res = sum(num1, num2);

	printf("%d + %d = %d\n", num1, num2, res);

	return 0;
}

int sum(int x, int y)
{
	return x + y;
}