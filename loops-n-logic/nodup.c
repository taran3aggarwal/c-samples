// nodup.c
#include<stdio.h>

#define MAXSIZE 50

int main(void)
{
	long int array[MAXSIZE];
	int i, j, k, size, num, flag = 0;

	printf("enter the size of array (not more than %d): ", MAXSIZE);
	scanf("%d", &size);

	num = size;

	puts("enter the elements in array: ");
	for(i = 0; i < size; i++) {
		scanf("%ld", &array[i]);
	}

	// removing duplicates
	for(i = 0; i < size - 1; i++) {
		for(j = i + 1; j < size; j++) {
			if (array[i] == array[j])	// duplicate found
			{
				flag = 1;

				// remove duplicate and adjust array and its size
				size = size - 1;

				for(k = j; k < size; k++) {
					array[k] = array[k + 1];
				}

				j = j - 1;
			}
		}
	}

	if (flag == 1) {
		printf("array has %d duplicates.\n", (num - size));
		puts("\narray after removing duplicates:");

		for (i = 0; i < size; i++) {
			printf("%ld ", array[i]);
		}
	} else {
		puts("there are not duplicate elements in array.");
	}

	return 0;
}