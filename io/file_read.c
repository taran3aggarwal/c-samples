#include<stdio.h>
#include<errno.h>

int main(void)
{
	FILE *ofp = fopen("fab_r.txt", "w");
	char *name = (char *) malloc(50 * sizeof(char));	// char name[50];
	int age;
	
	/*
	while((c = getc(ifp) != EOF) {
		putc(c, ofp);
	}*/

	if (ofp != NULL) {
		printf("enter your name: ");
		fscanf(stdin, "%s", name);

		fprintf(ofp, "Hello %s, how are you??\n", name);
		printf("%s, please enter your age: ", name);
		fscanf(stdin, "%d", &age);

		fprintf(ofp, "%s you are %d years old.", name, age);
	} else {
		perror("File not found.");
		printf("errno = %d\n", errno);
		return -1;
	}

	if (ofp != NULL) {
		fflush(ofp);
		fclose(ofp);
	}

	return 0;
}