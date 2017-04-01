#include<stdio.h>
#include<string.h>

int main(void)
{
	int a[10],b[10],c[10],i,j,k,p,t,l;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("enter number of 2nd array");
	scanf("%d",&l);
	for(i=0;i<l;i++){
		scanf("%d",&b[i]);
	}
	p=0;
	for(j=0;j<l;j++)
	{
		for(i=0;i<10;i++)
		{
			if(b[j]==a[i])
			{
				p++; 		
			}
		}
	}
	if(p==l)
	{
		printf("subset");
	}
	else 
	{
		printf("not subset");
	}
	return 0;
	
}