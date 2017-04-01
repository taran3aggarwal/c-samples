#include<stdio.h>
#include<errno.h>

void substring(char *str,int s,int end,char *sub)
{
	int i, len, n = 0;
	for(len = 0; str[len] != '\0'; len++);

	if (end < s || end > len) {
		errno = 1;
		perror("out of index");
		printf("errno %d\n", errno);
		return;
	}
	for(i = s; i <= end; i++) {
		sub[n++] = str[i];
	}
	
	sub[n + 1] = '\0';
}
 int main ()
 {
	int b,e;
	char s[100], sub[100];
	gets(s);
	printf("enter starting and ending point of a string");
	scanf("%d%d",&b,&e);

	substring(s, b, e, sub);
	puts(sub);

	return 0;
 }