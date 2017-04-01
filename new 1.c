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
	

	// COLUMN SORTING
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			for(k = (i + 1); k < 3; k++) {
				if(a[i][j] > a[k][j]) {
					t = a[i][j];
					a[i][j] = a[k][i];
					a[k][j]=t;
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