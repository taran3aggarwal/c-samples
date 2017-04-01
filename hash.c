#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char n;
		for(i=0;i<24;i++)
		{
			printf("%c",i%6==0?'\n':'#');
		}
		
	return 0;	
	
}