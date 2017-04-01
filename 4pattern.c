#include<stdio.h>
int main()
{
	int i,j,k,l;char s[]="*****";
	j=3;
	for(i=1;i<6;i++)
	{
		if(i<3)
		{
			printf("%.*s%*.*s\n",i,s,j+i,i,s);
			j-=2;
		}
		else if(i==3)
		{
			for(j=0;j<5;j++){printf("%c",j%2==0?'*':' ');}
		}
		else{
			printf("\n%.1s%4.1s",s,s);
		}
	}
}