// lnkded.c: self referental structure - linked list in C
#include<stdio.h>
#include<stdlib.h>

#define ERROR -1
#define FALSE 0
#define TRUE 1

struct list
{
	int data;				// node data
	struct list * next;		// pointer to next node
};

// creates node using data and returns pointer to first node of the list
struct list * insert_node(int data, struct list * first)
{
	struct list * new_node;
	new_node = (struct list *) malloc(sizeof(struct list));	//allocate memory for node

	if (new_node == NULL) {
		perror("out of memory.");
		return NULL;
	}

	new_node->data = data;	// initialize list data member
	new_node->next = first;

	return new_node;
}

// deletes node whose data matches input data and return updated list
struct list * delete_node(int data, struct list * node)
{
	struct list *current, *pred;	// work space for insertion

	if (node == NULL) {
		perror("list is empty. nothing to delete.");
		return node;
	}

	for (pred = current = node; current; pred = current, current = current->next) {
		if (current->data == data) {
			// node found, relese this node
			if (current == node) {			// if node is to be delete is first node
				node = current->next;		// then, update the list pointer
			} else {
				pred->next = current->next;	// bypass the node
			}

			free(current);
		}

		return node;
	}

	return node;
}

// display list
void display_list(struct list * node)
{
	struct list * lst;

	for(lst = node; lst->next != NULL; lst = lst->next) {
		printf("-> %d ", lst->data);
	}

	printf("\b\b.\n");
}


int main(void)
{
	struct list * lst;		// empty list;
	int choice, data;

	puts("LINKED LIST MANIPULATION PORGRAM\n");

	while (TRUE) {
		printf("List Operation - 1. Insert, 2. Display, 3. Delete, 4. Quit\n\n");
		scanf("%d", &choice);

		switch(choice) {
		case 1:
			printf("enter the data for node to be created: ");
			scanf("%d", &data);

			lst = insert_node(data, lst);
			break;
		case 2:
			puts("list contents:");
			display_list(lst);
			break;
		case 3:
			printf("enter the data for node to be deleted: ");
			scanf("%d", &data);

			lst = delete_node(data, lst);
			break;
		case 4:
			printf("end of linked list operation.\n");
			return EXIT_SUCCESS;
		default:
			errno = ERROR;
			perror("invalid choice.");
			break;
		}
	}

	return 0;
}