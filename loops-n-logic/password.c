#include<stdio.h>
#include<conio.h>

int main(void)
{
	char pass[20], c;
	int i = 0;

	printf("enter password <max 20>: ");
	for(; ; i++) {
		c = getch();

		if (c == 13) {
			break;
		}

		pass[i] = c;
		putchar('*');
	}

	pass[i] = '\0';

	printf("Password is %s\n", pass);

	return 0;
}