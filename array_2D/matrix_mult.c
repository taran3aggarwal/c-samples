#include<stdio.h>

int main(void)
{
	int mat1[100][100], mat2[100][100], prod[100][100];
	int i, k, j, m, n, p, q, c;
	
	puts("Enter the Order of the matrices:");
	puts("Enter the value of ROW and COLUMN of matrix 1:");
	scanf("%d %d",&m,&n);
	puts("Enter the value of ROW and COLUMN of matrix 2:");
	scanf("%d %d",&p,&q);
	
	if(n == p){
		printf("Enter the Elements of first matrix:");
		
		for(i = 0; i < m; i++){
			for(j = 0; j <n; j++){
				scanf("%d",&mat1[i][j]);
			}
		}
		
		printf("Enter the Elements of Second matrix:");
		
		for(i = 0; i < p; i++){
			for(j = 0; j < q; j++){
				scanf("%d",&mat2[i][j]);
			}
		}
		
		puts("Enter you choice :");
		puts("1) ADDITION OF MARTIX:");
		puts("2) MULTIPLICATION OF MATRIX:");
		//scanf("%d",&c);
		c = getch();
		switch(c){
			
			case 1 : 
				for(i = 0; i < m; i++){
					for(j = 0; j < q; j++){
						prod[i][j] = 0;
						for(k = 0; k < n; k++){
							prod[i][j] = prod[i][j] + mat1[i][k] * mat2[k][j];
						}
					}
				}
				break;
		}
	for(i = 0; i < m; i++){
			for(j = 0; j < q; j++){
				printf("%d\t",prod[i][j]);
			}
			puts("\n");
		}
	}
	
	else{
		printf("Enter the matrices of appropriate order.");
	}
}