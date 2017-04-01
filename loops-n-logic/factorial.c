#include<stdio.h>
int main()
{
	long i ,n ,fact =1 , j;
	printf("Enter the no.");
	scanf("%d",&n);
	for(j = 1;j<=10;j++){
		fact=1;
	for(i=j ; i >= 1 ; i--){
		fact *= i ; 
		
	}
	printf("%d  = %d\n",j,fact);
}
return 0;
}