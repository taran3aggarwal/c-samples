#include<stdio.h>
#include "search.h"


int main()
{
	int arr[10], i, x, found;

	puts("enter the elementes in array: ");
	for(i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	printf("enter the char to be search ");
	scanf("%d", &x);
	
	//found = search(arr, 10, x);
	found = binsearch(arr, 10, x);
	
	if (found > -1) {
		printf("found at %d\n", found + 1);
	} else {
		puts("not found");
	}

	return 0; 
}