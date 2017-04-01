#include<stdio.h>
#include<time.h>

int main(void)
{
	time_t seconds = time(NULL);

	printf("The number of hours elasped since 1st January, 1971 is %ld.\n", (seconds / 3600));

	return 0;
}