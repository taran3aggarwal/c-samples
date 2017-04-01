#include<stdio.h>
#include<string.h>

int main()
{
	int ,i,j,k,l,m,a[10],s[5],u[10],in[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter another set");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s[i]);
	}
	for(j=0;j<5;j++)
	{
		for(i=0;i<10;i++)
		{
			if(s[j]==a[i])
			{
				l++;
			}
		}
	}
	return 0;
}