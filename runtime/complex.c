#include<stdio.h>
#include<stdlib.h>

struct complex
{
	long real;
	long imag;
};

void print(struct complex c)
{
	printf("(%ld + %ld i)\n", c.real, c.imag);
}

int main(void)
{
	struct complex *cp = (struct complex *) calloc(5, sizeof(struct complex));

	for(int i = 0; i < 5; i++) {
		print(cp[i]);
	}

	return 0;
}