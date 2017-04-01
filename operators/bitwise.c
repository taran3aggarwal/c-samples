#include<stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	
	printf("X = %d and Y = %d\n\n", x, y);
	printf("(x & y) %d\n", (x & y));
	printf("(x | y) %d\n", (x | y));
	printf("(x ^ y) %d\n", (x ^ y));
	printf("(~x) %d\n", (~x));
	printf("(~y) %d\n", (~y));
	printf("(x >> 2) %d\n", (x >> 2));
	printf("(x >> 2) %d\n", (x << 2));
	printf("(y << 2)%d\n", (y >> 2));
	printf("(y << 2)%d\n\n", (y << 2));
}