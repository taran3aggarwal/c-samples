#include<stdio.h>

int main()
{
	int a, b, c, x;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	x = a;
	
	if (b > x) {
		x = b;
	}
	
	if (c > x) {
		x = c;
	}
	
	printf("%d is larger among all.\n", x);
	
	return 0;
}