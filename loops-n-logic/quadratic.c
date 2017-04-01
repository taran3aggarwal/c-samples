#include<stdio.h>
#include<math.h>
int main()
{	int a , b, c , d, x1, x2;
	printf("Enter the value of co-efficient of  x2 :");
	scanf("%d",&a);
	printf("Enter the value of co-efficient of  x : ");
	scanf("%d",&b);
	printf("Enter the value of Constant : ");
	scanf("%d",&c);
	 d = b*b - 4 * a * c ;
	 x1 = ( -b + sqrt(d)) / (2 * a) ;
	 x2 = ( -b - sqrt(d)) / (2 * a) ;
	 
	 printf("Root 1 = %d and Root 2 = %d",x1 ,x2);
}