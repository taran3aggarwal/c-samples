#include<stdio.h>
#include<errno.h>

int main(void)
{
	FILE *fp = fopen("sprintf.c", "r");
	char c;

	if (fp != NULL) {
		while((c = getc(fp)) != EOF) {
			putchar(c);
		}
	} else {
		perror("File not found");
		printf("errno: %d\n", errno);
		return errno;
	}

	return 0;
}