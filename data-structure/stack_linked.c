/* linked_stack.c: implementation of stack using linked list */
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *push(struct node *p, int value)
{
	struct node *temp;
	temp = (struct node *) malloc(sizeof(struct node));

	/* creates new node using data value passed as parameter */
	if (temp == NULL) {
		puts("error: no memory available.");
		// exit(0);
		return NULL;
	}

	temp->data = value;
	temp->link = p;
	p = temp;

	return p;
}

struct node *pop(struct node *p, int *value)
{
	struct node *temp;

	if(p == NULL) {
		puts("error: the stack is empty, cannot pop.");
		// exit(0);
		return NULL;
	}

	*value = p->data;
	temp = p;
	p = p->link;

	free(temp);

	return p;
}

int main(void)
{
	struct node *top = NULL;
	int n, value;

	do {
		do {
			printf("enter the element to be pushed: ");
			scanf("%d", &value);

			top = push(top, value);

			printf("enter 1 to continue");
			scanf("%d", &n);
		} while(n == 1);

		printf("enter 1 to pop an element: ");
		scanf("%d", &n);

		while(n == 1) {
			top = pop(top, &value);

			printf("%d popped from the stack.\n", value);
			printf("enter 1 to pop an element: ");
			scanf("%d", &n);
		}

		printf("enter 1 to continue: ");
		scanf("%d", &n);
	} while(n == 1);

	return 0;
}