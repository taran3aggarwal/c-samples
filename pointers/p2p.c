#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int **mat;
	int m, n;
	int i, j;

	printf("enter the number of rows: ");
	scanf("%d", &m);

	mat = (int **) malloc(sizeof(int) * m);

	printf("enter the number of columns: ");
	scanf("%d", &n);

	for(i = 0; i < m; i++) {
		mat[i] = (int *) malloc(sizeof(int) * n);
	}

	puts("enter the elements in matrix");

	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	puts("elements in matrix");

	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%d\t", mat[i][j]);
		}
		putchar('\n');
	}

	// printing lower half of matrix
	puts("\nlower half of matrix");
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			if (i >= j) {
				printf("%d\t", mat[i][j]);
			} else {
				printf(" ");
			}
		}
		putchar('\n');
	}

	// printing upper half of matrix
	puts("\nupper half of matrix");
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			if (i <= j) {
				printf("%d\t", mat[i][j]);
			} else {
				printf("\t");
			}
		}
		putchar('\n');
	}
}