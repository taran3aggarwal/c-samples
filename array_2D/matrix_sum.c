#include<stdio.h>

int main()
{
	int mat1[3][3] , mat2[3][3], sum[3][3];
	int i, j;

	puts("MATRIX ADDITION PROGRAM");

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			scanf("%d",&mat1[i][j]);
		}
	}
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d",&mat2[i][j]);
		}
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j] = mat1[i][j] + mat2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
		
	}
	

	return 0;
}