#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	char pass,s[50],*rp;
	printf("enter password:  ");	
	pass=getch();
	i=0;
	while(i<49)
	{
		if(pass==13)
		{
			break;
		}
		else{printf("*");
		s[i]=pass;
		pass=getch();
		i++;
		}		
	}
	s[i+1]='\0';
	printf("\npassword is %s",s);
	return 0;
}