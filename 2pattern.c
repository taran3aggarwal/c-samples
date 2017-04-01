#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=6;i++){
		printf("%c",i%6==0?'\n':'1');
	}
	for(i=1;i<=3;i++){
		printf("%.1d%4.1d\n",1,1);
	}
	for(i=1;i<=6;i++){
		printf("%c",i%6==0?'\n':'1');
	}
return 0;
}