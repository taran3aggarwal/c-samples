#include<stdio.h>
#include<conio.h>
struct st
{int roll;
st *next;
};

void main()
{int i,j,np,k,a;
char b;
clrscr();
st *ptr=new st;
st *top=NULL;
printf("enter choice:\n1 INSERT\n2 DELETE");
do
{scanf("%d",&a);
if(a==1)
	{insert();}
else if(a==2)
	{delet();}
else if (a==3)
	{display();}
printf("\ncontinue (Y/N) ");
scanf("%c",&b);		}while(b=='y'||b=='Y')
getch();}
void insert()
{ printf("enter data");
scanf("%d",&j);
st *t;
t->roll=j;
t->next=NULL;

if(top==NULL)
	{top=t;
	}
else
	{k=top;
	top=t;
	top->next=k;
	}
}
