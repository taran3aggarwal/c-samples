#include<stdio.h>

void substring(char *str, int from, int to, char *subs)
{
	int i, j, len = 0;

	while(str[len++] != '\0');

	if (to > len || from > to) {
		perror("out of range");
		return;
	}

	for(i = from, j = 0; i <= to; i++, j++) {
		subs[j] = str[i];
	}
	
	subs[i++] = '\0';
}

int main(void)
{
	char str[100] = "meandmyworld";
	char subs[100] = {'\0'};
	int start, end;

	printf("enter any string: ");
	gets(str);

	printf("enter starting and ending point of a string: ");
	scanf("%d%d", &start, &ene);

	substring(str, start, end, subs);

	puts(subs);

	return 0;
}