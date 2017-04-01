#include<stdio.h>

int main(void)
{
	int m, n, p, q;
	int i, j, k, sum = 0;
	int mat1[1][100], mat2[100][100];
	int prod[100][100];

	puts("MATRIX MULTIPLICATION PROGRAM\n");

	printf("enter the number of rows and columns of first matrix: ");
	scanf("%d %d", &m, &n);

	printf("enter the number of rows and columns of second matrix: ");
	scanf("%d %d", &p, &q);

	if (n == p) {
		puts("fill the values in first matrix");
		for(i = 0 ; i < m; i++) {
			for (j = 0; j < n; j++) {
				scanf("%d", &mat1[i][j]);
			}
		}

		puts("fill the values in second matrix");
		for(i = 0; i < p; i++) {
			for (j = 0; j < q; j++) {
				scanf("%d", &mat2[i][j]);
			}
		}

		for(i = 0 ; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf("%d\t", mat1[i][j]);
			}
			putchar('\n');
		}

		printf("\n");

		for(i = 0 ; i < p; i++) {
			for (j = 0; j < q; j++) {
				printf("%d\t", mat2[i][j]);
			}
			putchar('\n');
		}

		for (i = 0; i < m; i++) {
			for (j = 0; j < q; j++) {
				prod[i][j] = 0;
				// sum = 0;

				for(k = 0; k < n; k++) {
					prod[i][j] = prod[i][j] + mat1[i][k] * mat2[k][j];
					// OR
					// sum += mat1[i][k] * mat2[k][j]
				}
				// prod[i][j] = sum;
			}
		}

		printf("\n");
		for(i = 0 ; i < m; i++) {
			for (j = 0; j < q; j++) {
				printf("%d\t", prod[i][j]);
			}
			putchar('\n');
		}
	} else {
		puts("invalid matrix order for matrix multiplication.");
	}

	return 0;
}