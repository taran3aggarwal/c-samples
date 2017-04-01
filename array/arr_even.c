#include<stdio.h>

int main()
{
	int arr[10] ;
	int i , c = -1;
	printf("Enter the 10 Elements of an array :");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);	
	}
	
	for(i=0;i<10;i++){
		if(arr[i] % 2 == 0){
			printf("Odd nos are %d\n",arr[i]);
			continue;
		}	
		printf("even nos are %d\n",arr[i]);
	}
	 
return 0;	
}