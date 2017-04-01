#include<stdio.h>
int main()
{	int i , j;
	int arr[5] , arr1[5];
	printf("Enter the array:");
	for(i = 0;i < 6;i++){
		scanf("%d",&arr[i]);
	}

	for(i = 0;i < 6;i++){
		printf("%d",arr[i]);
	}
	 for(j = 0 , i = 4; j < 6 ; j++,i--){
		// printf("%d %d\t",i,j);
		// //printf("%d\t",arr[i]);
		 arr1[j] = arr[i];
	 }
	 for(j=0;j < 6;j++){
		 printf("%d\t",arr1[j]);
	 }

	return 0; 
}