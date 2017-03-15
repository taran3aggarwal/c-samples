// auto qualifier
#include<stdio.h>
#include<stdlib.h>

void test()
{
	int x = 20;
	static int y = 30;
	
	printf ("Value of X is %d and Y is %d.\n", x, y);
	
	x = x + 1;
	y = y + 1;
	
	printf ("Value of X is %d and Y is %d.\n", x, y);
}

int main()
{	
	auto int ai = 0; // here auto is optional
	register int ri = 25; // r is saved in register memory (temporary memory)
	const int CI = 20; // value of ci can never be changed
	
	//Example of static qualifier
	printf("Calling test().\n");
	test();
	
	printf("\nCalling test() again.\n");
	test();
	
	putchar('\n');
	
	return EXIT_SUCCESS;
}