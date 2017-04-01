#include<stdio.h>

int main()
{
	int mat[10][10];
	int i, j, m, n, zero = 0, non_zero = 0;
	
	printf("Enter the value of row:");
	scanf("%d", &m);

	printf("Enter the value of column:");
	scanf("%d", &n);
	
	if(m <= 10 && n <= 10 ){
		for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				scanf("%d", &mat[i][j]);
			}
		}
		
		for(i =0; i <m; i++){
			for(j = 0; j < n; j++){
				if(mat[i][j] == 0){
					zero++;
				} else{
					non_zero++;
				}
			}
		}
	
		if(zero > non_zero){
			printf("Entered matrix is a sparse matrix");
		} else{
			printf("Entered matrix is not a sparse matrix");
		}
	} else{
		printf("Enter the value of row and column between the defined limit.");
	}

	return 0;
}