#include<stdio.h>
#include<string.h>

int palindrome(char *str)
{
	int i, j, length = 0;

	for (i = 0; str[i] != '\0'; length++, i++);

	for(j = length - 1, i = 0; i <= length / 2; i++, j--) {
		if (str[i] != str[j]) {
			break;
		}
	}

	return (i >= j) ? 1 : 0;
}

int main(int argc, char *argv[])
{
	char str[100];

	if (argc > 1) {
		strcpy(str, argv[1]);
	} else {
		printf("enter the string: ");
		gets(str);
	}

	printf("\n\"%s\" %s a palindrome string.\n", str, palindrome(str) ? "is" : "isn\'t");

	return 0;
}