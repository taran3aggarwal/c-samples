#include<stdio.h>
#include<stdlib.h>

enum FLAG {ERROR = -1, FALSE, TRUE};
typedef enum FLAG f;

int main(void)
{
	f flag;
	
	int i;
	
	printf(" Enter 0 Or 1 ");
	scanf("%d", &i);
	
	flag = i;
	
	switch (flag) {
	case ERROR:
		printf("OFF");
		break;
	case FALSE:
		printf("ON");
		break;
	default:
		perror("invalid button.");
		exit(1);
	}

	return 0;
}