#include<stdio.h>
#include<time.h>
#include<limits.h>

int main(void)
{
	time_t begin;
	time_t end;
	unsigned long i;

	begin = time(NULL);

	for(i = 0UL; i <= ULONG_MAX / 2; i++);

	end = time(NULL);

	printf("The for loop used %lf time to complete its execution.\n", difftime(end, begin));

	return 0;
}