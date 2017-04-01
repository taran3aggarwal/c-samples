#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,l,m,n,p,q,sum,r;
	printf("enter row and col of m1");
	scanf("%d%d",&m,&n);
	printf("enter row and col of m2");
	scanf("%d%d",&p,&q);
	if(n==p)	{
		
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
		
	for(k=0;k<q;k++)
	{
		for(i=0;i<m;i++)
		{sum=0;
			for(j=0;j<n;j++)
			{
				sum+=a[i][j]*b[j][k];
				//sum+=a[k][j]*b[j][i];
			}
		c[i][k]=sum;
		}
	
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
				}
	else {
		printf("wrong input");
		
	}
	return 0;
	
}