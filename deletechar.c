#include<stdio.h>
#include<string.h>

int main()
{
int i,j,k,l,t;
char s[100],ch;
gets(s);
printf("enter character to be deleted : ");
scanf("%c",&ch);
for(l=0;s[l]!='\0';l++){}

	printf("%d", strlen(s));
for(i=0;s[i]!='\0';i++)
{
	if(s[i]==ch)
		{
		for(j=i;j<l;j++)
			{
			s[j]=s[j+1];
			}
		i--;			
		}	
	}
	
	printf("%d", strlen(s));
puts(s);
return 0;
}	