#include<stdio.h>
#include<time.h>
#include<dos.h>

int main(void)
{
	struct date dt;
	struct time tm;

	getdate(&dt);
	gettime(&tm);

	printf("Current date: %d-%d-%d\n", dt.da_day, dt.da_mon, dt.da_year);
	printf("Current time: %d:%d:%d\n", tm.ti_hour, tm.ti_min, tm.ti_sec);

	return 0;
}