#include <stdio.h>
#include<conio.h>
//function declaration
void bubbleSort(int *a, int n);

int main(){
	//variable declaration
	int arr[5], i;
	clrscr();
	//input
	printf("enter array\n");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	//sort
	bubbleSort(arr,5);	//sending arr address and no. of elements
		      printf("\n");
	//output
	printf("array after bucket sorting\n");
	for(i = 0; i < 5; i++)
		printf("%d\t", arr[i]);
	getch();
	return 0;
	getch();
}

//function definition
void bubbleSort(int *a, int n)
{
	int k, j, i, temp;
	for(k = 1; k <= n-1; k++)
	{
		for(j = 0; j <= n-k-1; j++)
		{      // printf("%d\t",a[j]);
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			printf("\n");
		}
	       /*	for(i=0;i<=n;i++)
			{
			 printf("%d\t",a[i]);

			 }
		printf("\n"); */
	}
}