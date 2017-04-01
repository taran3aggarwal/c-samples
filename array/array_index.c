#include<stdio.h>
int main()
{
	int i, c, index ;
	int marks[5] ;
	
	for(i=0;i<5;i++){
		printf("enter the no ");
		scanf("%d",&marks[i]);
		}
		c = marks[0];
	for(i=0;i<5;i++){
		if(c > marks[i]){
			c = marks[i];
		}
	}
	for(i=0;i<5;i++){
		if(c == marks[i]){
		index = i + 1;
		} 
		//index = i + 1;
	}
	printf("%d",index);
	return 0;
}