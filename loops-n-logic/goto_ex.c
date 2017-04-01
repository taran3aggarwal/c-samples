#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	char ch ;

	puts("enter any operation: ");
	puts("+");
	puts("-");
	puts("*");
	puts("/");
	scanf("%c", &ch);
	
	if (ch == '+') goto add;
	if (ch == '-') goto sub;
	if (ch == '*') goto mult;
	if (ch == '/') goto div;
	
add:
	printf("Enter two nos.");
	scanf("%d%d",&a,&b);
	printf("%d",a+b);
	goto exit;
sub:
	puts("enter the no. ");
	scanf("%d%d",&a,&b);
	printf("%d",a-b);
	goto exit;
mult:
	puts("enter the no. ");
	scanf("%d%d",&a,&b);
	printf("%d",a*b);
	goto exit ;
div:
    printf("enter the no. ");
    scanf("%d%d",&a,&b)	;
	printf("%d",a/b);
	goto exit ;
exit:

	return 0;
}