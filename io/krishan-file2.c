#include<stdio.h>

int main(void)
{
	FILE *ifp = fopen("test.txt", "r");
	FILE *ofp = NULL;
	char line[500];
	

	if (ifp != NULL) {
		ofp = fopen("hello.txt", "w");

		fgets(line, 499, ifp);

		if (ofp != NULL) {
			fputs(line, ofp);
			fclose(ofp);

			puts(line);
		} else {
			puts("output file is not available.");
		}
		fclose(ifp);
	} else {
		printf("file not found\n");
	}

	return 0;
}