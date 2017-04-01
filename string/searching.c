#include<stdio.h>

int main()
{
	char arr[50], x  ;
	int i , count, k = 0;
	
	 puts("enter the string: ");
	 gets(arr);
	 
	 printf("%s\n",arr);
	 
	 printf("enter the char to be search ");
	 scanf("%c",&x);
	 
	 for(i=0; arr[i] != '\0' ;i++){
		 if(arr[i] ==x ){
			 k = i;
			 printf("%d ", k+1);
			}
			k = 0;
	 }
	 return 0; 
}