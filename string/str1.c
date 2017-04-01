#include<stdio.h>

#define MAXLEN 21

int main(void)
{
	char kishan[MAXLEN + 1], ravi[MAXLEN + 1];
/*	int i;

	for(i = 0; i < MAXLEN; i++) {
		//scanf("%c", &kishan[i]);
		kishan[i] = getchar();
		fflush(stdin);
	}

	kishan[i] = '\0';

	printf("\n\n");

	for(i = 0; i < MAXLEN; i++) {
		printf("%c", kishan[i]);
		//putchar(kishan[i]);
	}*/
	gets(ravi);
	puts(ravi);

//	scanf("%s", ravi);
//	printf("%s", ravi);

	return 0;
}