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
	/*for(k=0;k<3;k++)
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
	
	// ROW SORTING
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			for(k = (j + 1); k < 3; k++) {
				if(a[i][j] > a[i][k]) {
					t = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = t;
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