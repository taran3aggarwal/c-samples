#include<stdio.h>

int main()
{
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age > 0) {
		if (age > 12 && age < 20) {
			printf ("You're teen aged person.\n");
		}
	} else {
		printf("Age cannot be negative.\n");
	}
}