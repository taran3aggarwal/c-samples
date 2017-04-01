#include<stdio.h>

int main()
{
	int a[10],i,j,n;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=a[i];j+=2)
		{
			printf("*");
		}
		printf("\t%d\n",a[i]);
	}
	return 0;
}