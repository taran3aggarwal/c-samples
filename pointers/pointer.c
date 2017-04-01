#include<stdio.h>

int main(void)
{
	int i = 50;			// integer variable
	int *ip = &i;		// pointer to integer
	int **pip = &ip;	// pointer to integer pointer
	void *vp;

	printf("Value of I = %d and address of I = %p.\n", i, &i);
	printf("Value of IP = %p, value of *IP = %d and address of IP = %p.\n", ip, *ip, &ip);
	printf("Value of PIP = %p, value of *PIP = %p, value of **PIP = %d and address of PIP = %p.\n", pip, *pip, **pip, &pip);

	vp = &i;
	printf("%d stored at %p\n", i, vp);

	return 0;
}