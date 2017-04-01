#include<stdio.h>

void msg(char *m)
{
	sprintf(m, "(%d + %di)", c.real, c.imag);
}

int main()
{
	char m[30];

	msg(m);

	puts(m);
}