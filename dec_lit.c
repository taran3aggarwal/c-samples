#include<stdio.h>

int main()
{
	int i;
	
	i = 10;		// initializing by decimal number
	printf("%d\n", i);
	printf("%c\n", i);
	printf("%o\n", i);
	printf("%X\n\n", i);

	i = '>';	// initializing by character
	printf("%d\n", i);
	printf("%c\n", i);
	printf("%o\n", i);
	printf("%X\n\n", i);
	
	i = 073;	// initializing by octal number
	printf("%d\n", i);
	printf("%c\n", i);
	printf("%o\n", i);
	printf("%X\n\n", i);
	
	i = 0xAc;	// initializing by hexa-decimal number
	printf("%d\n", i);
	printf("%c\n", i);
	printf("%o\n", i);
	printf("%X\n", i);
}