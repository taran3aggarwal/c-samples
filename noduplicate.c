#include<stdio.h>
int main(void)
{
	int i, j, k, a[10], t, p, r, c;

	printf("DO NOT ENTER DUPLICATE VALUES\n");

	for(i = 0; i < 10; i++) {
		scanf("%d",&a[i]);

		for(j = 0; j < i; j++) {
			if(a[j] == a[i]) {
				i--;
				break;
			}
		}
	}

	for(i = 0; i < 10; i++) {
		printf("%d\t",a[i]);		
	}

	return 0;
}