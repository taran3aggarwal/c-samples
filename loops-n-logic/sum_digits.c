#include<stdio.h>

int main()
{
	long long int num;
	int rem, sum = 0;

	printf("enter any number: ");
	scanf("%lld", &num);

	while(num != 0) {
		rem = num % 10;
		sum += rem;
		num /= 10;
	}

	printf("%d", sum);
}