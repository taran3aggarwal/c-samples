#include<stdio.h>

int main(void)
{
	FILE *ifp = fopen("test.txt", "r");
	FILE *ofp = NULL;
	char line[500];
	int x;
	

	if (ifp != NULL) {
		ofp = fopen("hello.txt", "w");

		fscanf(ifp, "%d %s", &x, line);

		if (ofp != NULL) {
			fprintf(ofp, "%d %s", x, line);
			fclose(ofp);

			printf("%d %s", x, line); 	
		} else {
			puts("output file is not available.");
		}
		fclose(ifp);
	} else {
		printf("file not found\n");
	}

	return 0;
}