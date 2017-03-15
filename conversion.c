#include<stdio.h>

int main(void)
{
	signed char sc = 'A';			// %c
	unsigned char uc = 66U;			// %c

	signed short int ssi = -10;		// %hd or hi | ho | hx
	unsigned short int usi = 21U;	// /%hu

	signed int si = -10;			// %d or i | o | x
	unsigned int ui = 20U;			// %u

	signed long int sli = -255L;	// %ld or li | lo | lx
	unsigned long int uli = 278LU;	// %lu

	signed long long int sl2i = -5864L;		// %lld or lli | llo | llx
	unsigned long long int ul2i = 25864LU;	// %llu

	float f = 10.06f;			// %f
	double d = 586.005;			// %lf

	long double ld = 2576.0;	// %Lf

	printf("%d\n", sc);
	printf("%c\n\n", uc);

	printf("%hd\n", ssi);
	printf("%hu\n\n", usi);

	printf("%d\n", si);
	printf("%u\n\n\n", ui);

	printf("%ld\n", sli);
	printf("%lu\n\n", uli);

	printf("%lld\n", sl2i);
	printf("%llu\n", ul2i);

	printf("%f\n", f);
	printf("%lf\n\n", d);

	printf("%Lf\n", ld);

	return 0;
}