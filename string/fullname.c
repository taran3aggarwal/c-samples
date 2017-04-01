#include<stdio.h>

int main(void)
{
	char first[10], middle[10], last[10];
	char fullname[30];
	int i, j, k;

	printf("enter the first name: ");
	gets(first);

	printf("enter middle name: ");
	gets(middle);

	printf("enter the last name: ");
	gets(last);

	for(i = 0; first[i] != '\0'; i++) {
		fullname[i] = first[i];
	}
	
	fullname[i] = ' ';

	for(j = 0; middle[j] != '\0'; j++) {
		fullname[i + j + 1] = middle[j];
	}

	fullname[i + j + 1] = ' ';

	for(k = 0; last[k] != '\0'; k++) {
		fullname[i + j + k + 2] = last[k];
	}

	fullname[i + j + k + 2] = '\0';

	puts(fullname);

	return 0;
}