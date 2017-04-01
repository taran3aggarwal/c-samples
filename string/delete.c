#include<stdio.h>

void deleteCharAt(char *, int);

int main()
{
	char str[20];
	int n;

	printf("enter any string: ");
	gets(str);

	printf("enter the index: ");
	scanf("%d", &n);

	deleteCharAt(str, n);

	puts(str);
}

void deleteCharAt(char *str, int idx)
{
	int i, j, leng;

	for(leng = 0; str[leng] != '\0'; leng++);
	
	if(leng>idx) {
		for(j = idx - 1; j < leng; j++) {
			str[j] = str[j + 1];
		}
	} else{
		printf("out of range");
	}
}																										