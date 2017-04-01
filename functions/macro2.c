#include<stdio.h>

#define SQR(a) (a) * (a)

int square(int a)
{
	return a * a;
}

int main(void)
{
	int x, y;

	x = square(2 + 3);
	y = SQR(2 + 3);

	printf("%d\n", x);
	printf("%d\n", y);

	return 0;
}