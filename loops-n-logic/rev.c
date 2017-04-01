/* rev.c */
#include<stdio.h>

void main(void)
{
	char *msg = "Hello World";
	int i, x;
	
	for (i = 0; msg[i] != '\0'; i++);
	
	printf("%d\n", i);
	
	for (x = i - 1; x >= 0; x--) {
		printf("%c", msg[x]);
	}
}