#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
	{return 1/(pow(x,3));
	}
void main()
{float ul,ll,l,n,i,h,fa,s;
clrscr();
printf("enter upper limit ,lower limit and sub intervals\n");
scanf("%f%f%f",&ul,&ll,&n);
h=(ul-ll)/n;
printf("the width is %.3f ",h);
i=ll+h;
s=0;
while(i<ul)
	{printf("\n f(%0.3f) = %f",i,f(i));
	s+=f(i);
	i+=h;
	}
fa=h*((f(ll)+f(ul))/2+s);
printf("\n the solution is %f",fa);
getch();
}