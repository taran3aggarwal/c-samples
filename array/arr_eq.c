#include<stdio.h>
int main()
{
	int i, total;
	int x[4] ; 
	
	printf("enter the no. ");
	
	for(i = 0 ; i<4; i++){
		scanf("%d",&x[i]);
		
	}
	total = 0;
	 for(i=0 ; i<4; i++){
		 total = total + x[i]*x[i];
	 }
	 
	 printf("%d\n",total);
	 
	 for(i=0 ; i<4 ; i++){
		 printf("%d ",i);
	 }
	 
	 return 0;
	
	
}