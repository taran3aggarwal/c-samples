#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	char s[10];
	int i,j,l,n,p;float sum;
	gets(s);
	for(l=0;s[l]!='\0';l++)
	{
		if(s[l]=='.')
		{
			p=l;
		}
	}
	printf(". pos %d",p);
	sum=0;
	for(i=0;i<p;i++)
	{
		sum+=(s[i]-48)*pow(10,p-i-1);
	}
	for(j=p+1;j<l;j++)
	{
		sum+=(s[j]-48)*pow(10,p-j);
	}
	printf("\n%f",sum);
	return 0;
}