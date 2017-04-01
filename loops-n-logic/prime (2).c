#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,k,flag=0,m=0;
printf("Enter the no. to be checked:");
scanf("%d",&n);
m=n/2;
for(int i=2;i<=m;++i){
k=n%i;

if(k==0){
printf("Entered no. is not prime no.");
flag=1;
break;
}
}
if(flag==0)
printf("Entered no. is prime no.");


getch();


}