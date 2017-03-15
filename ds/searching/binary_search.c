#include<stdio.h>

int binary_search(int list[], const int N, const int key)
{
	int left = 0;
	int right = N - 1;
	int mid;

	while(left <= right) {
		mid = (left + right) / 2;

		if (key < list[mid]) {
			right = mid - 1;		
		} else if (key > list[mid]) {
			left = mid + 1;	
		} else {		/* found match */
			return mid;
		}
	}

	return -1;		/* no match */
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int length = sizeof(arr) / sizeof(int);

	int pos = binary_search(arr, length, 7);

	if (pos > 0) {
		printf("%d is found at %d position.\n", 7, (pos + 1));
	} else {
		puts("no record found.");
	}

	return 0;
}