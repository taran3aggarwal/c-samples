#ifndef _SORT_H			/* #if !defined _SORT_H */
#define _SORT_H
#endif

#if defined _ARR_H
#include<arr.h>
#endif

/* bubble sort */
void bubble_sort(int arr[], const int N)
{
	int i, j;
	int x;		/* temporary storage */

	for(i = 0; i < N; i++) {
		for(j = 0; j < N - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
}

/* sorting by straight exchange (bubble sort v.2) */
void straight_exchange(int arr[], const int N)
{
	int i, j;
	int x;		/* temporary storage */

	for(i = 1; i < N; i++) {
		for(j = N - 1; j >= i; j--) {
			if (arr[j - 1] > arr[j]) {
				x = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = x;
			}
		}
	}
}

/* sorting by straight insertion */
void straight_insertion(int arr[], const int N)
{
	int i, j;
	int x;		/* temporary storage */

	for(i = 0; i < N; i++) {
		x = arr[i];
		j = i;

		while(j > 0 && x < arr[j - 1]) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = x;
	}
}

/* sorting by binary insertion */
void binary_insertion(int arr[], const int N)
{
	int i, j, m, L, R;
	int x; 	/* temporary storage */

	for(i = 0; i < N; i++) {
		x = arr[i];
		L = 0;
		R = i;

		while(L < R) {
			m = (L + R) / 2;

			if (arr[m] <= x) {
				L = m + 1;
			} else {
				R = m;
			}
		}

		for(j = i; j >= R; j--) {
			arr[j] = arr[j - 1];
		}

		arr[R] = x;
	}
}

/* sorting by straight selection */
void straight_selection(int arr[], const int N)
{
	int i, j, k;
	int x;		/* temporary storage */

	for(i = 0; i < N - 1; i++) {
		k = i;
		x = arr[i];

		for(j = i + 1; j < N; j++) {
			if (arr[j] < x) {
				k = j;
				x = arr[k];
			}
		}

		arr[k] = arr[i];
		arr[i] = x;
	}
}

/* shaker_sort */
void shaker_sort(int arr[], const int N)
{
	int j, k, L, R;
	int x;		/* temporary storage */

	L = 1;
	R = N - 1;
	k = R;

	do {
		for(j = R; j >= L; j--) {
			if (arr[j - 1] > arr[j]) {
				x = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = x;
				k = j;
			}
		}

		L = k + 1;

		for(j = L; j <= R; j++) {
			if (arr[j - 1] > arr[j]) {
				x = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = x;
				k = j;
			}
		}

		R = k - 1;
	} while(L > R);
}

#ifdef _SORT_H			/* #if defined _SORT_H */
#undef _SORT_H
#endif