/*
 * stack.c: stack implementation from SMU book
 */
#include<stdio.h>

#define MAX 10	/* the maximum size of stack */

void push(int stack[], int *top, int value)
{
	if (*top < MAX) {
		*top = *top + 1;
		stack[*top] = value;
	} else {
		perror("the stack is full, can not push a value\n");
		return;
	}
}

void pop(int stack[], int *top, int *value)
{
	if (*top >= 0) {
		*value = stack[*top];
		*top = *top - 1;
	} else {
		perror("the stack is empty can not pop a value\n");
		return;
	}
}

int main(void)
{
	int stack[MAX];
	int top = -1;
	int n, value;

	do {
		do {
			printf("ente the element to be pushed: ");
			scanf("%d", &value);

			push(stack, &top, value);

			printf("enter 1 to continue ");
			scanf("%d", &n);
		} while(n == 1);

		printf("enter 1 to pop an element: ");
		scanf("%d", &n);

		while(n == 1) {
			pop(stack, &top, &value);

			printf("The value popped is %d.\n", value);
			printf("enter 1 to pop an element: ");
			scanf("%d", &n);
		}

		printf("enter 1 to continue ");
		scanf("%d", &n);
	} while(n == 1);

	return 0;
}