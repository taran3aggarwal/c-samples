#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
	{return 1/(pow(x,1)+1);
	}
void main()
{float ul,ll,n,i,h,fa,s1,s;
int l;
clrscr();
printf("enter upper limit ,lower limit and sub intervals\n");
scanf("%f%f%f",&ul,&ll,&n);
h=(ul-ll)/n;
printf("the width is %.3f ",h);
i=ll+h;
s=0;
l=1;
while(i<ul)
	{printf("\n f(%0.3f) = %f",i,f(i));
	if(l%2==0)
		{s1+=f(i);
		}
	else
		{s+=f(i);
		}
	i+=h;
	l++;
	}
fa=h/3*((f(ll)+f(ul))+4*s+2*s1);
printf("\n the solution is %f",fa);
getch();
}