#include<stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	
	printf("Value of X is %d and Y is %d\n", x, y);
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	printf("Value of X is %d and Y is %d\n", x, y);
}