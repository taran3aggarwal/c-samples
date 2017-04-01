#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,a[26],p;
	char c,s[26];
	for(i=0;i<26;i++)
	{
		a[i]=i+65;			
	}	
	for(i=0;i<26;i++)
	{
		p=rand()%26;
		c=a[p];
		if(c =='A' || c =='E' || c =='I' || c =='O' || c =='U')
		{
			continue;
		}
		else{
			printf("%c",c);
		}
	}	
	return 0;
}