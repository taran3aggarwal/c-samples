#include<stdio.h>
#include<stdlib.h>

#define MAX_LIMIT 6

int main()
{
	int a[MAX_LIMIT] ;
	int i, k, j , count = 3;
	
	printf("Enter the Elements of matrix:");
	
	for(i = 0; i < MAX_LIMIT; i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the value to be inserted :");
	scanf("%d",&k);
	
	while(1) {
		printf("Enter the value of index:");
		scanf("%d",&j);
	
	j = j-1;

	if(j < MAX_LIMIT ){
			for(i = 0; i < MAX_LIMIT; i++){

			if(i == j){
					a[i] = k;
				}
	for(i = 0; i < MAX_LIMIT; i++){
		printf("%d \t",a[i]);
	}
	}
	exit(0);
	}else {
		count--;
		printf("invalid value of index.(Attempts left: %d)\n",count);
	
	if(count == 0){
			exit(0);
		}
	}
	}
	return 0;
}