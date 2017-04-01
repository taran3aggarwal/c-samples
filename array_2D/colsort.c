#include<stdio.h>
int main()
{
	int i,j,k,a[5][5],t,p,r,c;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);			
		}
	}
/*	for(k=0;k<3;k++)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]>=a[i][j+1])
				{
					t=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=t;
				}				
			}	
		}			
	}*/
	
	for(k=0;k<3;k++)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[j][i]>=a[j+1][i])
				{
					t=a[j][i];
					a[j][i]=a[j+1][i];
					a[j+1][i]=t;
				}				
			}	
		}			
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
return 0;	
}