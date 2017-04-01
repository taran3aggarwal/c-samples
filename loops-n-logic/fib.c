#include<stdio.h>
int main()
{
	int f0 = 0,f1 = 1,fn = 0,n,i;
	printf("Enter the no.");
	scanf("%d",&n);
	 
	 for(i=2;i <= n;i++)
	 {   
		 printf("%d\t",fn);
		 fn = f1 + f0;
		 f0 = f1;
		 f1 = fn ;
	 }

	 return 0;
	 }