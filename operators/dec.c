#include<stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	int m, n;

	printf("X = %d and Y = %d\n", x, y);

	m = x--;
	n = --y;

	printf("M (X--) = %d and N (--Y) = %d\n", m, n);
	printf("X = %d and Y = %d\n", x, y);

	return 0;
}