#include<stdio.h>

void main(void)
{
	float km, cm, inch, ft;

	printf("distance between two cities");
	scanf ("%f", &km);

	ft = km * 3280.8f;
	cm = km * 100000.0f;
	inch = km * 39370.08f;

	printf("distance in ft %f\n", ft);
	printf("distance in cm %f\n", cm);
	printf("distance in inch %f\n", inch);

	return 0;
}