#include<stdio.h>
int main()
{
	int arr[6] ; 
	int i, a=0 ;
	int index;
	
	printf("enter the array");
	for(i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the no.");
	scanf("%d",&a);
	
	printf("enter the index");
	scanf("%d",&index);
	
	arr[index] = a ; 
	for(i=0;i<6;i++){
		
	 
	 printf("%d ",arr[i]);
		
		
		}
		if(index>6){
			printf("\nrange over");
		}
		return 0 ; 
	
}