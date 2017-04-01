#include<stdio.h>

int main()
{
	int arr[10] ;
	int i , c = 0;
	printf("Enter the 10 Elements of an array :");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);	
	}
	
	for(i=0;i<10;i++){
		c = c + arr[i];
		}	
	printf("Average is %d", c / i);
	 
return 0;	
}