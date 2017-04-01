#include<stdio.h>
int main ()
{    
    int i, sum = 0 , c = 0 ;
	int marks[5] ;
	
	for(i=0;i<5;i++){
		printf("enter the marks");
		scanf("%d",&marks[i]);
	} 
	 for(i=0;i<5;i++){
		 if(marks[i]<0){
			c++; 			
		 }
	 }
	 printf("%d",c);
	 return 0;
}