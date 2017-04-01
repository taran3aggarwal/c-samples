#include<stdio.h>
#include "algo/sort.h"

#define MAX_LIMIT 10

void print_list(int []);

int main(void)
{
	int list[] = {5, 6, 188, 88, 12, 32, 76, 77, 15, -8};
	int i, j, temp;

	printf("Content of list: ");
	print_list(list);

	//bubble_sort(list, MAX_LIMIT);
	//bubble_sort2(list, MAX_LIMIT);
	//straight_insertion(list, MAX_LIMIT);
	//binary_insertion(list, MAX_LIMIT);
	//straight_selection(list, MAX_LIMIT);
	// shaker_sort(list, MAX_LIMIT);

	printf("\nArry after sorting:");
	print_list(list);

	return 0;
}

void print_list(int list[])
{
	int i;

	for (i = 0; i < MAX_LIMIT; i++) {
		printf("%d ", list[i]);
	}

	putchar('\n');
}