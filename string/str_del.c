#include<stdio.h>

int main()
{
	char str[50];
	int len = 0;
	int i, j, k = 0, a;
	//unsigned int a;
	gets(str);
	
	while(str[len] != '\0') {
		len++;
	}

	printf("Length of a string is %d\n",len);
	
	printf("Enter the value of index :");
	scanf("%d",&a);
	a--;
	
	if(a < len){
		for(i = a, j = a + 1; i < len ; i++, j++)
		{
		  str[i] = str[j];
		}
	}
	//str[j] = '\0';
	
	puts(str);
	
	while(str[k++] != '\0');
	printf("Length of a string is %d",k-1);
	
	return 0;

}