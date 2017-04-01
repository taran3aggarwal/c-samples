#include<stdio.h>
#include<conio.h>

int main()
{
	char ch, password[20];
	int i = 0;

	for(i = 0; i <= 20; i++) {
		ch = getch();

		if (ch == 13) {
			break;
		} else {
			password[i] = ch;
			putchar('*');
		}
	}

	password[i] = '\0';
	
	printf("\nthe given passowrd is: %s", password);

	return 0;
}