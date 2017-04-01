#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int status = system("calc");

	printf("system(\"notepad\") has returned: %d\n", status);

	return 0;
}