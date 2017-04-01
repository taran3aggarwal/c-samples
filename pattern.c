#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<5;i++)	{
	printf("%*.1d%*.1d\n",10-i,i,2*i,i);	
	}
	for(i=3;i>=1;i--)	{
	printf("%*.1d%*.1d\n",10-i%5,i,2*i,i);	
	}
	return 0;
}/*
   1 1
  2   2
 3     3
4       4
4       4
 3     3
  2   2
   1 1
*/