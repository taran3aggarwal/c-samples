#include<stdio.h>

int main(void)
{
	const char null = '\0';
	const char bell = '\a';
	const char BS = '\b';
	const char FF = '\f';
	const char LF = '\n';
	const char CR = '\r';
	const char HT = '\t';
	const char VT = '\v';

	printf("NULL = %d\n", null);
	printf("BELL = %d\n", bell);
	printf("BS = %d\n", BS);
	printf("FF = %d\n", FF);
	printf("LF = %d\n", LF);
	printf("CR = %d\n", CR);
	printf("HT = %d\n", HT);
	printf("VT = %d\n", VT);

	return 0;
}