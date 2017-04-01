#include<stdio.h>

#define MAXLEN 10

int main(void)
{
	int array[MAXLEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, j, temp;

	for(i = 0; i < MAXLEN; i++) {
		printf("%d ", array[i]);
	}
	
	printf("\n");

	for(i = 0, j = MAXLEN - 1; i <= j; i++, j--) {
		temp = array[j];
		array[j] = array[i];
		array[i] = temp;
		
	}

	for (i = 0; i < MAXLEN; i++) {
		printf("%d ", array[i]);
	}
}