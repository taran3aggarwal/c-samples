#include<stdio.h>
#include<string.h>
#define MAXSIZE 50

int main(void)
{
	int i, j, k, size, num;
	char s[MAXSIZE],c;
	gets(s);
	num=strlen(s);
	c=0;
	
	for(i=0, k=num-1;i<num/2;i++,k--)
	{
		c=s[i];
		s[i]=s[k];
		s[k]=c;
	}
	puts(s);
	return 0;
}