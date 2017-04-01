#include<stdio.h>

int main(void)
{
	int a[10],i,j,k,l,t,min;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=0;
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		
	}
	min*=-1;
	printf("%d\n",min);
	for(i=0;i<10;i++)
	{
		if(a[i]>=0)
		{
			for(j=0;j<min/2;j++)
			{
				printf(" ");
			}
		}
		else if(a[i]<0 && a[i]!=min)
		{
			for(t=0;t<(min-a[i])/2;t++)
			{
				printf(" ");				
			}
		}
		for(k=0;k<a[i]/2;k++)
		{
			printf("*");			
		}
		printf("\t%d\n",a[i]);
	}
	return 0;
}