#include<stdio.h>
#include<time.h>

int main(void)
{
	clock_t time = clock();

	printf("CPU start time is %ld.\n", time);

	return 0;
}