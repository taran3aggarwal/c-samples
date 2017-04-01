#include<stdio.h>

long fact(const int m)
{
	int i, n = m;
	int res = 1;

	// factorial (m) = m! = m * (m - 1) * (m - 2) * ... * 1
	// OR
	// factorial(m) = m! = 1 * 2 * 3 * ... * m
	// for I = 1 TO M
	for (i = n; n >= 1; n--) {
		res *= n;
	}

	return res;
}

int main ()
{
	int m;
	unsigned char f = 159u;

	printf("enter the number whose factorial to be found: ");
	scanf("%d", &m);

	printf ("The factorial: %c(%d) = %d! = %ld.\n", f, m, m, fact(m));

	return 0 ;
}