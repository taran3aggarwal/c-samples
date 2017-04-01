#include<stdio.h>

int main()
{
	int i ;
	puts("List of years which are leap year from 1900 to 2017");
	/*if(((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
		printf("Entered year is a leap year");
	}
	else
		printf("Not a leap year");
	*/
	for(i=1900;i<2017;i++){
		
		if(((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) { 
		printf("%d is a leap year\n",i);
	}
	else{
		printf("%d is not a leap year.\n",i);
	}
    if (i == 2014){
		break ;
	}
	}
	
	return 0;
}