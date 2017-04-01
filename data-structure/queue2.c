//queue2.c: implement a queue by using an array (from SMU Book)
#include<stdio.h>
#include<stdlib.h>

#define MAX 10		/* the maximum size of the queue */

void insert(int queue[], int *rear, int *value)
{
	if(*rear < MAX - 1) {
		*rear = *rear + 1;
		queue[*rear] = value;
	} else {
		printf("the queue is full, cannot insert a value\n");
		// exit (0);
		return;
	}
}