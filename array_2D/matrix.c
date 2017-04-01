#include<stdio.h>

int main()
{
	float mat1[3][3];
	int i, j;

	puts("MATRIX ADDITION PROGRAM");

	for(i = 1; i < 4; i++) {
		for(j = 1; j < 4; j++) {
			mat1[i][j] = (float) (i ) + ((j ) / 2.0f);
		}
	}
	
	for (i = 1; i < 4; i++) {
		for (j = 1; j < 4; j++) {
			printf("%2.3f\t", mat1[i][j]);
		}
		putchar('\n');
	}

	return 0;
}