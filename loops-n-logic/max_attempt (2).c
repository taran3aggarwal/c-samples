#include<stdio.h>
#include<stdlib.h>

#define MAX_LIMIT 6

int main()
{
	int a[MAX_LIMIT] ;
	int i, data, loc, count = 3;

	printf("Enter the Elements in list: ");	
	for(i = 0; i < MAX_LIMIT; i++) {
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < MAX_LIMIT; i++) {
		printf("%d ", a[i]);
	}

	printf("Enter the value to be inserted: ");
	scanf("%d", &data);
	
	printf("Enter the location where data should be inserted: ");
	scanf("%d", &loc);
		
	if (loc >= MAX_LIMIT ) {
		do {
			printf("Wrong Location (1 - %d). Try  again, attempt left (%d): ", (MAX_LIMIT - 1), --count);
			scanf("%d", &loc);
			
			if (loc < MAX_LIMIT) {
				a[loc - 1] = data;
				break;
			}
		} while (count > 0);
	} else {
		a[loc - 1] = data;
	}
	
	for(i = 0; i < MAX_LIMIT; i++) {
		printf("%d ", a[i]);
	}


	return 0;
}