#include<stdio.h>
#include<errno.h>

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char *data;

	if (argc > 1) {
		fp = fopen(argv[1], "r");
		
		if (fp != NULL) {
			printf("File is opened for reading\n");

			while(fgets (data, 50, fp) != NULL) {
				printf("%s", data);
			}

			fclose(fp);
		} else {
			perror("File not found");
			printf("errno: %d\n", errno);
		}
	}

	return 0;
}