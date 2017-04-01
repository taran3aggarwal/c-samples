#include<stdio.h>

int main(void)
{
	int n = 5;
	int j1, j2;

	for (int i = 1; i <= 5; i++) {
		for (j1 = 1; j1 <= n; j1++) {
			printf("%d", j1);
		}

		for (j2 = n; j2 >= 1; j2--) {
			printf("%d", j2);
		}
		
		putchar('\n');
		
		n--;
	}

	return 0;
}