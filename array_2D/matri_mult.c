#include<stdio.h>

int main()
{
	int mat1[3][3] ;
	int mat2[3][3] ;
	int i , j, k, sum ;
	int prod[3][3] ;
	
	printf("enter the  elementof matrix 1");
	for(i=0  ; i<3 ; i++){
		for(k=0 ; k<3 ; k++){
			scanf("%d",&mat1[i][k]);
		}
	}
	
	printf("enter bthe element of matrix 2 ");
	for(k=0 ; k<3 ; k++){
		for(j=0 ; j<3 ; j++){
			scanf("%d",&mat2[k][j]);
		}
	}
	
	
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			sum = 0 ;
			for(k=0 ; k<3 ; k++){
				sum += mat1[i][k] * mat2[k][j];
			}
			prod[i][j] = sum;
		}
	}
	
	for(i=0 ; i<3 ; i++){
	for(j=0 ; j<3 ; j++){
	printf("%d ",prod[i][j]);
	}
	printf("\n");
	}


	return 0 ;
}