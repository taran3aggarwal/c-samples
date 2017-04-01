#include<stdio.h>
int main()
{
	int num[5];
	int i, c;
	
	for(i=0 ; i<5 ; i++){
		printf("enter the elment no. %d is  ",i);
		scanf("%d",&num[i]);
	}
	 c = num[0];
	 for(i=0 ; i<5; i++){
		 if(c<num[i]){
			 c = num[i];
		 }
	 }
		 printf("%d ",c);
	 
	
	
	return 0;
}	