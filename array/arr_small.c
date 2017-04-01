#include<stdio.h>
int main ()
{    
    int i, c, index;
	int marks[5] ;
	
	for(i=0;i<5;i++){
		printf("enter the marks");
		scanf("%d",&marks[i]);
	}
	c = marks[0];
	for(i=1;i<5;i++){
		if(c > marks[i]){
			c = marks[i];			
		}
	
	}
	 printf("%d",c);
	 for(i=0 ; i<5 ; i++){
		 if(c==marks[i]){
			index = i;
		 }
	 }
	 printf("index is %d ",index);
	
	
	 

return 0;
}