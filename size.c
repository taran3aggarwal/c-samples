#include<stdio.h>

int i, j, k;

int main()
{
	printf("Size of char is %d byte.\n", sizeof(char));
	printf("Size of signed char is %d byte.\n", sizeof(signed char));
	printf("Size of unsigned char is %d byte.\n\n", sizeof(unsigned char));

	printf("Size of short or short int is %d bytes.\n", sizeof(short));
	printf("Size of signed short int is %d bytes.\n", sizeof(signed short int));
	printf("Size of unsigned short int is %d bytes.\n\n", sizeof(unsigned short int));

	printf("Size of int is %d bytes.\n", sizeof(int));
	printf("Size of singed int is %d bytes.\n", sizeof(signed int));
	printf("Size of unsigned int is %d bytes.\n\n", sizeof(unsigned int));

	printf("Size of long is %d bytes.\n", sizeof(long));
	printf("Size of singed long int is %d bytes.\n", sizeof(signed long int));
	printf("Size of unsigned long int is %d bytes.\n\n", sizeof(unsigned long int));

	printf("Size of long long is %d bytes.\n", sizeof(long long));
	printf("Size of singed long int is %d bytes.\n", sizeof(signed long long int));
	printf("Size of unsigned long int is %d bytes.\n\n", sizeof(unsigned long long int));

	printf("Size of float is %d bytes.\n", sizeof(float));
	printf("Size of double is %d bytes.\n\n", sizeof(double));

	printf("Size of long double is %d bytes.\n\n", sizeof(long double));
	
	//  signed & unsigned
	
	return 0;
}