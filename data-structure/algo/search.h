#ifdef _SEARCH_H		/* #if !defined _SEARCH_H */
#define _SEARCH_H
#endif

#if defined _ARR_H
#include<arr.h>
#endif

int search(int *list, int len, int key)
{
	int i, index = -1;

	for(i = 0; i < len; i++) {
		if (key == list[i]) {
			index = i;
			break;
		}
	}

	return index;
}

int binsearch(int *arr, int len, int key)
{
	int low, mid, high;

	low = 0;			/* left */
	high = len - 1;		/* right */

	while(low <= high) {
		mid = (low + high) / 2;

		if (key < arr[mid]) {
			high = mid - 1;
		} else if(key > arr[mid]) {
			low = mid + 1;
		} else {	/* found match */
			return mid;
		}
	}

	return -1;		/* no match */
}

#ifdef _SEARCH_H		/* #if defined _SEARCH_H */
#undef _SEARCH_H
#endif