#include<stdio.h>
int main ()
{
	char arr[10];
	int i , a,j ;
	 
	puts("enter the string");
    gets(arr);
	
	scanf("%d",&a);
    
    for(i=0, j=0 ; i<10, j<10; i++,j++){
		arr[i] = arr[j];
		
	}  	
	puts(arr);
	return 0; 
}