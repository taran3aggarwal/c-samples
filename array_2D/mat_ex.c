#include<stdio.h>

int main()
{
	int table[2][3] = {
						{0, 0, 0},
						{1, 1, 1}
						};
	int i, j;

		for(i = 0; i < 2; i++){
			for(j = 0; j < 3; j++){
				printf("%d\t",table[i][j]);
			}
			printf("\n");
		}
		return 0;
}