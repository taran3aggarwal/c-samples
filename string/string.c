#include<stdio.h>

int main()
{
	char c[10], b[10], a[10];

	printf("Enter your First Name: ");
	gets(c);
	
	
	printf("Enter your middle Name: ");
	gets(b);
	
	
	printf("Enter your last Name: ");
	gets(a);
	
	printf("%s%s%s", c, b, a);
}