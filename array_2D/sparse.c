#include<stdio.h>

#define ROW 50
#define COL 50

int main(void)
{
	int matrix[ROW][COL];

	int i, j, m, n,  zero_count, non_zeros;
	zero_count = non_zeros = 0;

	puts("enter the number of row and columns: ");
	scanf("%d %d", &m, &n);

	puts("enter the elements in matrix: ");

	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d", & matrix[i][j]);
		}
	}

	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			if(matrix[i][j] == 0) {
				zero_count++;
			} else {
				non_zeros++;
			}
		}
	}

	if (zero_count > non_zeros) {
		puts("the given matrix is a sparse matrix\n");
	} else {
		puts("the given matrix isn\'t a sparse matrix\n");
	}
	
	puts("3-TUPPLE REPRESENTATION\n");

	puts("ROW\tCOL\tVALUE");
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			if (matrix[i][j] != 0) {
				printf("%d\t%d\t%d\n", (i + 1), (j + 1), matrix[i][j]);
			}
		}
	}

	return 0;
}