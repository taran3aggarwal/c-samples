#include<stdio.h>

int main()
{
	char sex;
	
	printf("enter your sex code:");
	scanf("%c", &sex);
	
	printf("%s\n", (sex == 'm' || sex == 'M' || sex == 'f' || sex == 'F') ? ((sex == 'm' || sex == 'M') ? "Male" : "Female") : "Invalid sex code");
}