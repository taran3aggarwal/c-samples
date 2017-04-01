#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char name[50], src[50], file_name[50],c;
	int i, j = 0, len = strlen(argv[0]);
	FILE *fp;
	for(i = 0; argv[0][i] != '\0';i++){
		file_name[i] = argv[0][i];
	}
	file_name[i] = '\0';
	printf("%s",file_name);
	
	for(i = len - 1; argv[0][i] != '\\'; i--) {
		name[j++] = argv[0][i];
	}

	strrev(name);
	puts(name);

	for(i = 0; name[i] != '.'; i++) {
		src[i] = name[i];
	}

	src[i] = '\0';
	
	strcat(src, ".c");
	
	puts(src);
	
	fp = fopen(src, "r");

	if (fp != NULL) {
		while((c = fgetc(fp)) != EOF) {
			putchar(c);
		}
	} else {
		perror("File not found.");
	}

	return 0;
}