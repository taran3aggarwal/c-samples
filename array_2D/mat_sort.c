#include<stdio.h>

#define M 3
#define N 3

int main(void)
{
	int mat[M][N] = {{5, 6, 7}, {17, 14, 55}, {11, 9, 4}};
	int i, j, k, temp;

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}

	// row sorting
	for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            for (k = (j + 1); k < N; k++) {
                if (mat[i][j] > mat[i][k]) {
                    temp = mat[i][j];
                    mat[i][j] = mat[i][k];
                    mat[i][k] = temp;
                }
            }
        }
	}

	// column sorting
	/*for(j = 0; j < N; j++) {
		for(i = 0; i < M; i++) {
			for(k = i + 1; k < M; k++) {
				if(mat[i][j] > mat[k][j]) {
					temp = mat[i][j];
					mat[i][j] = mat[k][j];
					mat[k][j] = temp;
				}
			}
		}
	}*/

	printf("\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}