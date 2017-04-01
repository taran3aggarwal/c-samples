#include<stdio.h>
#include<string.h>

#define MAXLINE 1000

int getline (char *line, int max);

int main(int argc, char *argv[])
{
	//char line[MAXLINE];
	int c;

	while(--argc > 0 && (*++argv)[0] == '-') 
		while(c = *++argv[0])
			switch(c) {
			case 'c':
				puts("CELCIUS");
				break;
			case 'f':
				puts("FAHRENHEIT");
				break;
			default:
				printf("conv: illegal option %c\n", c);
			}

	if (argc != -1) {
		printf("Usage: conv -c /f <value>\n");
	}

	return 0;
}