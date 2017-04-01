#include<stdio.h>
int main()
{
	int mat1[3][3], mat2[3][3] ;
	int i, j ;
	
		printf("enter the matrix1 ");
		
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d",&mat1[i][j]);
			}
		}
		printf("enter the matrix2 ");
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d",&mat2[i][j]);
			}
		}
		printf("the matrix are\n");
		
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d\t",mat1[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("\n");
		printf("\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d\t",mat2[i][j]);
			}
			printf("\n");
		}
	return 0 ;
} 