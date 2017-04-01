#include<stdio.h>

int leap_year(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 1 : 0;
}

int main ()
{
	int year;
	
	printf("enter year to check: ");
	scanf("%d", &year);
	
	printf("%d is %s ", year, leap_year(year) ? "leap year.\n" : "not leap year.\n");

	return 0;
}
