// queue.c: 
#include<stdio.h>
#include<stdlib.h>

#define MAX_VAL 50	/* maximum depth of val queue */

int front = 0;
int rear = 0;

long int val[MAX_VAL];	/* value stack */

/* enque: insert data in queue */
void enque(long int data)
{
	/*if ((rear - front) < MAX_VAL) {
		val[rear++] = data;
	} else {
		puts("queue is full, can\'t enque further.");
	}*/

	if (rear == MAX_VAL - 1) {
		puts("queue is full, can\'t enque further.");
		return;
	}

	val[rear++] = data;
}

/* deque: remove and return last value from queue */
long int deque(void)
{
	long int popped = -99999;
	/*if ((rear - front) > 0) {
		return val[++front];
	} else {
		front = rear = 0;
		puts("queue is empty, nothing to deque.");
		return 0L;
	}*/

	if (rear == front) {
		front = rear = 0;
		puts("queue is empty, nothing to remove.");
	} else {
		popped = val[++front];
	}

	return popped;
}

void display(void)
{
	if ((rear - front) > 0) {
		for(int i = front; i < rear; i++) {
			printf("%ld ", val[i]);
		}
	} else {
		front = rear = 0;
		puts("queue is empty, nothing to display.");
	}

	putchar('\n');
}

int main(void)
{
	for (int i = 0; i < MAX_VAL; i++) {
		srand(1.0);
		enque((i + 2) * (rand() % 60));
	}

	display();

	enque(50L);
	enque(550L);

	display();

	deque();

	display();

	return 0;
}