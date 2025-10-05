#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	float x = 12.3*pow(10,-1);
	float y = 15.4;
	float z = 0.252*pow(10,3);
	float g;
	g = ((pow(y, x+1) / (pow(fabs(y-2), 1./3) + 3)) + ((x+y/2) / (2 * fabs(x+y))) * pow((x+1), -1/sin(z)));
	printf("g = %f", g);
}