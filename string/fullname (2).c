#include<stdio.h>
#include<string.h>
int main()
{
	char s[3][50],s3[150];
	int i,j,k,n;	
	for(i=0;i<3;i++)
	{
		gets(s[i]);
	}
	n=0;
	for(j=0;j<3;j++)
	{
		for(i=0;s[j][i]!='\0';i++, n++)
		{
			s3[n]=s[j][i];
		}
		s3[n++]=' ';
	}	
	s3[n+1]='\0';
	printf("%s",s3);
	return 0;	
}