// stack.c
#include<stdio.h>

#define MAX_VAL 50		/* maximum depth of val stack */

int top = 0;			/* next free stack position */
long int val[MAX_VAL];		/* value stack */

/* push: push data onto value stack */
void push(long int data)
{
	if (top < MAX_VAL) {
		val[top++] = data;
	} else {
		puts("stack full, can\'t push further.");
	}
}

/*pop: pop and return top value from stack */
long int pop(void)
{
	if (top > 0) {
		return val[--top];
	} else {
		puts("stack is empty. can\'t pop anything.");
		return 0L;
	}
}

void display(void)
{
	if (top > 0) {
		for (int i = top - 1; i >= 0; i--) {
			printf("%ld ", val[i]);
		}
	} else {
		puts("stack is empty, nothing to display.");
	}

	putchar('\n');
}

int main(void)
{
	for (int i = 0; i < MAX_VAL; i++) {
		push(i * 10L);
	}
	
	display();

	pop();
	
	display();

	push(20L);
	push(25L);
	push(30L);

	display();
}