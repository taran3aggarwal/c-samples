#include<stdio.h>

void straight_insertion(int list[], const int N)
{
	int i, j;
	int x;

	for (i = 0; i < N; i++) {
		x = list[i];

		while (j = i; j > 0 && x < list[j - 1]; j--) {
			list[j] = list[j - 1];
		}

		list[j] = x;
	}
}

int main(void)
{
	int list[] = {55, 19, 18, 11, 22};
	int i = 0;

	while (i < 5) {
		printf("%d ", list[i++]);
	}

	straight_insertion(list, 5);

	i = 0;
	while (i < 5) {
		printf("%d ", list[i++]);
	}

	return 0;
}