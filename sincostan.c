#include<stdio.h>
#include<math.h>
#include<conio.h>
void sinx()
{
	double x,r;
	scanf("%lf",&x);
	x=(3.14/180)*x;
	r= (double) sin(x);
	printf("value of sin(%lf) = %lf",x,r);
	getch();
	return;
}
void cosx()
{
	double x,r;
	scanf("%lf",&x);
	x=(3.14/180)*x;
	r=cos(x);
	printf("value of cos(%lf) = %lf",x,r);
	getch();
	return;
}
void tanx()
{
	double x,r;
	scanf("%lf",&x);
	x=(3.14/180)*x;
	r=tan(x);
	printf("value of tan(%lf) = %lf",x,r);
	getch();
	return;
}
void ex()
{
	int x;
	double r;
	scanf("%d",&x);
	r= (double) exp(x);
	printf("value of exp(%d) = %lf",x,r);
	getch();
	return;
}
void logx()
{
	int x;
	double r;
	scanf("%d",&x);
	r= (double) log(x);
	printf("value of log(%d) = %lf",x,r);
	getch();
	return;
}
int main()
{
	int i,j,k,l;
	char ch;
	printf(" s : sin() \n c : cos()\n t : tan()\n e : exp()\n l : log()\n x : EXIT\n enter input\t");
	scanf("%c",&ch);
	fflush(stdin);
	do{	
		if(ch=='s'||ch=='S') {	clrscr();sinx();	}
		else if(ch=='c'||ch=='C'){	clrscr();cosx();	}
		else if(ch=='t'||ch=='T'){	clrscr();tanx();	}
		else if(ch=='e'||ch=='E'){	clrscr();ex();	}
		else if(ch=='l'||ch=='L'){	clrscr();logx();	}
		else
		{
			printf("incorrect input");
		}
		clrscr();
		printf(" s : sin() \n c : cos()\n t : tan()\n e : exp()\n l : log()\n x : EXIT\n enter input\t");
		scanf("%c",&ch);
		fflush(stdin);
	}while(ch!='x');
	return 0;	
}