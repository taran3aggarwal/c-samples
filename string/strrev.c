//strrev.c: reverse string
#include<stdio.h>

int main(void)
{
	char name[20], c;
	int i, j, len;

	gets(name);

	for(i = 0; name[i] != '\0'; i++);

	len = i;

	for(i = 0, j = len - 1; i <= len / 2; i++, j--) {
		c = name[j];
		name[j] = name[i];
		name[i] = c;
	}

	puts(name);

	return 0;
}