#include<stdio.h>

#define MAXLEN 50

int main(void)
{
	char str[MAXLEN + 1], rev[MAXLEN + 1], c;
	int len, i, j;

	gets(str);

	for(len = 0; str[len] != '\0'; len++);

	for(i = 0, j = len - 1; i <= j; i++, j--) {
		// rev[i] = str[j];
		c = str[j];
		str[j] = str[i];
		str[i] = c;
	}

	rev[i] = '\0';

	puts(str);

	return 0;
}