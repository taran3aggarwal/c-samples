#include<stdio.h>
int main()
{
	int i,j,k;
	char s[10]="********";j=5;
	for(i=0;i<5;i++,j--)
	{
		printf("\n%.*s%*.*s",j,s,2*i+j,j,s);
	}j=6;
	for(i=2;i<6;i++,j-=2)
	{
		printf("\n%.*s%*.*s",i,s,i+j,i,s);
	}
return 0;
}