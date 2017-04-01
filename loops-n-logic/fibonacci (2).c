//fibonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n, a=0,b=1,n1=0;
printf("Enter the no. of digits:");
scanf("%d",&n);
printf("%d\t%d",a,b);
for(int i=2;i<n;++i){
n1=a+b;
printf("\t%d",n1);
a=b;
b=n1;
}
getch();
}

