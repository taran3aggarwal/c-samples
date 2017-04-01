#include<stdio.h>

int main(void)
{
	int arr[10];
	int i, largest;

	puts("Fill the values in array: ");
	for(i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	largest = arr[0];

	for(i = 0; i < 10; i++) {
		if (largest < arr[i]) {
			largest = arr[i];
		}
	}

	printf("Largest value in array is %d.\n", largest);

	return 0;
}