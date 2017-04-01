#include<stdio.h>

int main()
{
	typedef unsigned int ui;
	ui x = 0;
	
	printf("Before conversion: %u.\n", x);
	
	x = ~x;
	
	printf("After conversion: %u.\n", x);
}