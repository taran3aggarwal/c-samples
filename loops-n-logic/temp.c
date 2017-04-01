#include<stdio.h>

double c2f(int c)
{
	return (1.8 * c) + 32;
}

double f2c(int f) {
	return (f - 32.0) / 1.8;
}

int main(void)
{
	unsigned char deg = 248;

	printf("temperature conversion program\n\n");
	
	printf("10%c C = %.4lf%c F\n", deg, c2f(10), deg);
	printf("50%c F = %.4lf%c C\n", deg, f2c(50), deg);

	return 0;
}