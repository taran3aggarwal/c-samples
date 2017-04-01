#include<stdio.h>
int main()
{
	char str[20];
	int i,m,n,lent = 0;
	
	printf("enter the string: ");
	gets(str);
	
	while(str[lent++]!='\0');

	printf("enter the starting address:");
	scanf("%d",&m);
	printf("enter the end adress:");
	scanf("%d",&n);
	
	if(m < n && n < lent){
		for(i=m;i<=n;i++){
			printf("%c",str[i]);
		}
	} else{
		printf("out of range");
	}
}