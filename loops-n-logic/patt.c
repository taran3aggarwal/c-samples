#include<stdio.h>

int main()
{
	int i, j, count = 0;

	for(i = 1; i <= 5; i++) {
		putchar('\n');
		for(j = 1; j <=i; j++) {
			printf(" %2d ", count++);
		}
	}
}