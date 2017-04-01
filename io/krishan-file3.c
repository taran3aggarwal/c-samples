#include<stdio.h>
#include<windows.h>

int main(void)
{
	FILE *ifp = fopen("test.txt", "r");
	FILE *ofp = NULL;
	char c;
	

	if (ifp != NULL) {
		ofp = fopen("hello.txt", "w");

		while((c = getc(ifp)) != EOF) {
			putc(c, ofp);
			putchar(c);
			Sleep(500);
		}
		
		fclose(ofp);
		fclose(ifp);
	} else {
		printf("file not found\n");
	}

	return 0;
}