//stak.c - Stack implementation in C
#include<stdio.h>

int top = 0;
int stack[10];

void push(int data)
{
	if (top == 10) {
		perror("stack is full. can\'t push further.");
		return;
	}

	stack[top++] = data;
}

int pop()
{
	int popped;

	if (top == 0) {
		perror("stack empty. can\'t pop anything.");
		popped = -1;
	}

	popped = stack[top--];

	return popped;
}

void display(void)
{
	int i;

	for(i = top; i >= 0; i--) {
		printf("%d ", stack[i]);
	}

	printf("\b\b.\n");
}

int get_top(void)
{
	return top;
}

int main(void)
{
	int i;

	for(i = 0; i < 10; i++) {
		push(i + 1);
	}

	display();

	for (i = 9; i >= 1; i--) {
		printf("%d", pop());
	}

	display();
}