#include<stdio.h>

int fact(int i)
{
	if (i == 0 || i == 1) {
		return 1;
	} else {
		return i * fact(i - 1);
	}
}

int main(void)
{
	int i = 5;
	int res = fact(i);

	printf("%d! = %d\n", i, res);

	return 0;
}