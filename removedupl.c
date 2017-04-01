#include<stdio.h>

int main()
{
	int a[10], i, j, t, f, k;

	for(i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}

	for(i = 0; i < 10; i++) {
		for(j = 1; j < i; j++) {
			if(a[i] == a[j]) {
				/*t = a[j];
				a[j]=a[j+1];
				a[j+1]=t;*/
				a[k] = a[k + 1];				
			}
		}
	}

	for(i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
	}
return 0;
}