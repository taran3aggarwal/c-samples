// switch case & default and break
#include<stdio.h>

int main()
{
	char c;
	
	printf("Enter any character");
	scanf("%c", &c);
	
	switch(c) {
	case 'A':
		printf("%c", c);
		break;
	case 'B':
		printf("%c", c);
		break;
	default:
		printf("Invalid character.");
	}
}