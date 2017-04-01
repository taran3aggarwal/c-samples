#include<stdio.h>
int main ()
{    
    int i, sum = 0 , c  ;
	int marks[5] ;
	
	for(i=0;i<5;i++){
		printf("enter the marks");
		scanf("%d",&marks[i]);
	} 
	 for(i=0;i<5;i++){
		 if(marks[i]%2==0){
			printf("%d\t",marks[i]); 
		 }
		 
	 }
	 return 0;
}