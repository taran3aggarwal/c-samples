#include<stdio.h>

int main() 
{
	char c;

	c = 'A';
	putchar(c);
	
	c = 75;
	putchar(c);
	
	c = '\114';
	putchar(c);
	
	c = '\x3c';
	putchar(c);
	
	return 0;
}