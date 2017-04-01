#include<stdio.h>
int main ()
{    
    int i, sum = 0 , c = -1 ;
	int marks[10] ;
	
	for(i=0;i<10;i++){
		printf("enter the marks");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<10;i++){
		if(c < marks[i]){
			c = marks[i];			
		}
	}
	
	printf("%d",c);
	 

return 0;
}