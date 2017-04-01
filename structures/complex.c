#include<stdio.h>

struct complex {
	double real;
	double imag;
} c3;

struct complex add(struct complex, struct complex);
struct complex sub(struct complex, struct complex);
struct complex mul(struct complex, struct complex);
struct complex div(struct complex, struct complex);

void format(struct complex c, char *ret)
{
	sprintf(ret, "(%.2lf, %.2lfi)", c.real, c.imag);
}

void create(struct complex *c)
{
	printf("enter real part: ");
	scanf("%d", &c->real);

	printf("enter imaginary part: ");
	scanf("%d", &c->imag);
}

int main(void)
{
	char ret[50];

	struct complex c1;
	c1.real = 4;
	c1.imag = 25;

	struct complex c2 = {8, 14};
	
	format(c1, ret);
	printf("complex 1: %s\n", ret);

	format(c2, ret);
	printf("complex 2: %s\n\n", ret);

	c3 = add(c1, c2);
	format(c3, ret);
	printf("c1 + c2 = %s\n", ret);
	

	c3 = sub(c1, c2);
	format(c3, ret);
	printf("c1 - c2 = %s\n", ret);

	c3 = mul(c1, c2);
	format(c3, ret);
	printf("c1 * c2 = %s\n", ret);

	c3 = div(c1, c2);
	format(c3, ret);
	printf("c1 / c2 = %s\n", ret);
	
	return 0;
}

struct complex add(struct complex c1, struct complex c2)
{
	struct complex result;
	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;

	return result;
}

struct complex sub(struct complex c1, struct complex c2)
{
	struct complex result;
	result.real = c1.real - c2.real;
	result.imag = c1.imag - c2.imag;

	return result;
}

struct complex mul(struct complex c1, struct complex c2)
{
	struct complex result;
	result.real = c1.real * c2.real - c1.imag * c2.imag;
	result.imag = c1.real * c2.imag + c1.imag * c2.real;

	return result;
}

struct complex div(struct complex c1, struct complex c2)
{
	double qt;
	struct complex result;

	qt = c2.real * c2.real + c2.imag * c2.imag;
	result.real = (c1.real * c2.real + c1.imag * c2.imag) / qt;
	result.imag = (c1.imag * c2.real - c1.real * c2.imag) / qt;

	return result;
}