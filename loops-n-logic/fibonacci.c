#include<stdio.h>

int main(void)
{
	int f0 = 0, f1 = 1, fn = 1;
	int n;

	for (n = 2; n < 10; n++) {
		printf("%d ", fn);

		fn = f1 + f0;

		f0 = f1;
		f1 = fn;
	}

	return 0;
}