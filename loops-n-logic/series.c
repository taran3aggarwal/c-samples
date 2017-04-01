#include<stdio.h>

int main(void)
{
	int n;
	long int p;
	double q;

	printf("P=2^n  \t \t  N \t\t Q=2^-n = (1/p)\n\n");

	for(n = 0, p = 1L; n <= 10; n++) {
		p = (n == 0) ? 1 : (p * 2);

		q = 1.0 / (double) p;
		
		printf("%4ld \t\t %2d \t\t %2.4lf\n", p, n, q);
	}

	return 0;
}