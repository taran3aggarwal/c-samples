//strlen.c: find the length of a string
#include<stdio.h>

#define MAXLEN 20

int main(void)
{
	char krishan[MAXLEN + 1];
	int i;

	gets(krishan);

	for(i = 0; krishan[i] != '\0'; i++);

	printf("length of %s is %d.\n", krishan, i);

	return 0;
}