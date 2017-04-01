#include<stdio.h>

int check_prime(const int n)
{
	int i, flag;

	for(i = 2; i <= n / 2; i++) {
		flag = 1;

		if (n % i == 0) {
			flag = 0;
			break;
		}
	}

	if (flag) {
		printf("\n%d is prime number.\n", n);
	} else {
		printf("\n%d is not prime number, it divisible by %d.\n", n, i);
	}
}

int main(void)
{
	int n, flag;

	printf("enter a number to check whether it is prime or not: ");
	scanf("%d", &n);

	check_prime(n);

	return 0;
}