#include<stdio.h>

char l2u(char c)
{
	return c >= 'a' && c <= 'z' ? 'A' + c - 'a' : c;
}

char u2l(char c)
{
	return c >= 'A' && c <= 'Z' ? 'a' + c - 'A' : c;
}

char toggle(char c)
{
	return c >= 'A' && c <= 'Z' ? 'a' + c - 'A' : 'A' + c - 'a';
}

int main()
{
	printf("%c\n", l2u('c'));
	printf("%c\n", u2l('C'));

	printf("%c\n", toggle('C'));
	printf("%c\n", toggle('c'));

	return 0;
}