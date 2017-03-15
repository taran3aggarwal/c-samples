#include<stdio.h>
#include<windows.h>

#define MAX_LIMIT 10

void print_list(int []);

int main(void)
{
	int list[] = {5, 6, 188, 88, 12, 32, 76, 77, 15, -8};
	int i, j, temp;

	printf("Content of list: ");
	print_list(list);

	for(i = 0; i < MAX_LIMIT; i++) {
		printf("i = %d\n", i);

		for(j = 0; j < MAX_LIMIT - i - 1; j++) {
			printf("j = %d\n", j);

			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}

			print_list(list);
		}
		printf("\n");
	}

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