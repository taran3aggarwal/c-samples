#include<stdio.h>

int main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7};
	int i, temp, len;
	len = (sizeof(array)/sizeof(int));
	len = len - 1;
	for(i = 0; i < (len / 2); i++) {
		temp = array[i];
		array[i] = array[len - i];
		array[len - i] = temp;
	}
	
	for (i = 0; i < 7; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}