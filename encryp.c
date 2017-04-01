#include<stdio.h>
#include<conio.h>
#include<fstream.h> 
#include<process.h>

void encode() 
{char k,fn[20];
   int a=0,i = 0;
printf("\nenter file name to be encrypted ");
scanf("%s",&fn);
ifstream ab;
ab.open("%d.txt",fn);
	if(!ab)	{printf("file not present");}
   while (!ab.eof()) 
	{ab>>k;
	if(a%2==0)
      		{k+=30;
		}
	else
		{k-=32;
		}
	a++;
   	}
   printf("\nfile encrypted");

}

void decode() 
{char k,fn[20];
   int a=0,i = 0;
printf("\nenter file name to be decrypted ");
scanf("%s",&fn);
ifstream ab;
ab.open("%d.txt",fn);
	if(!ab)	{printf("file not present");}
   while (!ab.eof()) 
	{ab>>k;
	if(a%2==0)
      		{k-=30;
		}
	else
		{k+=32;
		}
	a++;
   	}
   printf("\nfile decrypted");

}

 
void main() {
 
   char ch,y;
clrscr();
do
{ 
   printf("\n1 Encyrpt\n2 Decrypt\n3 Exit ");
scanf("%d",&ch);
if(ch==1)
	{encode();
	}
else if(ch==2)
	{decode();
	}
else if(ch==3)
	{exit(0);
	}
else {printf("\nentered choice is incorrect");}
printf("\n\n\t<<< BACK TO MAIN MENU <<< (Y/N)");
scanf("%d",&y);
}  while(y=='Y'||y=='y')
   getch();
}
