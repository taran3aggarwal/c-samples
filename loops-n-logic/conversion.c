#include<stdio.h>
int main()
{
	float rs, tf;
	int x, ti;
	int res;
	
	printf("Enter the amount : ");
	scanf("%f", &rs);
	
	x = (int) rs;
	
	tf = rs - x;
	tf*=100.00f;
	ti = (int) tf;
	res = (x * 100) + ti;
	
	//int r = (int) rs ;
	printf("Value of rupees in paisa %d",res);
}