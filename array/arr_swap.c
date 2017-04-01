#include<stdio.h>
int main()
{
	int i, c, index , indes , f ,k;
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
		printf("%d",c);
	}
	f = marks[0];
	for(i=0;i<5;i++){
		if(f<marks[i]){
			f = marks[i];
		}
		printf("%d",f);
		
	}  
	for(i=0;i<5;i++){
		if(c == marks[i]){
		index = i;
		} 
		//index = i + 1;
	}
	printf("%d\n",index);
	
	 for(i=0;i<5;i++){
		if(f==marks[i]){
			indes = i;
		}
	}
	printf("%d\n",indes);	
    k = marks[indes];
	marks[indes] = marks[index];
	marks[index] = k;
	
	for(i = 0; i<5 ;i++){
		printf("%d\t",marks[i]);
	} 
	
	return 0;
	
}