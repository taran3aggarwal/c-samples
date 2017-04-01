#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10],i,j,ch,p,v;

	for(i=0;i<10;i++) {
		scanf("%d",&a[i]);
	}
	
	printf("enter position ");
	scanf("%d",&p);
	if(p>0&&p<10) {
		printf("enter value");
		scanf("%d",&v);
		a[p-1]=v;
	} else {
		printf("wrong input enter again\n");
		i=0;

		while(i<3) {
			printf("enter position ");
			scanf("%d",&p);
			
			if(p>0&&p<10) {
				printf("enter value");
				scanf("%d",&v);
				a[p-1]=v;
				break;
			}
		i++;
		}
	}
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	return 0;
}
