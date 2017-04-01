#include<stdio.h>
int main ()
{    
    int i, sum = 0 , avg ;
	int marks[10] ;
	
	for(i=0;i<10;i++){
		printf("enter the marks");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<10;i++){
		printf("%d\n",marks[i]);
		sum = sum + marks[i];
	}
	 printf("%d",sum/10);

return 0;
}