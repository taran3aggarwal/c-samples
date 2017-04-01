#include<stdio.h>

#define ROW 3
#define COL 3

//1: void transpose(int matrix[M][N])
//2:
void transpose(int matrix[][COL], int row)
//3: void transpose(int (*matrix)[N], const int M)
{
	int i, j;
	int result[ROW][COL];

	for (i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			result[j][i] = matrix[i][j];
		}
	}

	for (i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			printf("%d\t", result[i][j]);
		}
		putchar('\n');
	}
}

int main()
{
	int matrix[][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int result[ROW][COL];
	int i, j;

	puts("TRANSPOSE THE FOLLOWING MATRIX");

	for (i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			printf("%d\t", matrix[i][j]);
		}
		putchar('\n');
	}

	// transpose(matrix, ROW);

	for (i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			result[j][i] = matrix[i][j];
		}
	}

	puts("\nMATRIX AFTER TRANSPOSING:");
	for (i = 0; i < ROW; i++) {
		for(j = 0; j < COL; j++) {
			printf("%d\t", result[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

