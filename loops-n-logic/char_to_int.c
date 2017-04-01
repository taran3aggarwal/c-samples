#include<stdio.h>

int main(void)
{
	char x;
	int n;
	
	puts("enter any digit: ");
	x = getchar();
	
	if (x >= '0' && x <= '9') {
		n = x - 48;
	}

	printf("integer value of %c is %d\n", x, n);

	return 0;
}