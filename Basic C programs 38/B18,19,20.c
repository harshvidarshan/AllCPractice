//WAP to find area and volume of sphere//
#include<stdio.h>
int main()
{
	float r,area,volume,vol,h,a,b;
	float pi=3.14;
	printf("radius: ");
	scanf("%f",&r);
		printf("height: ");
	scanf("%f",&h);
		printf("edge length: ");
	scanf("%f",&a);
	area=(4*pi*r*r);
	volume=(4/3)*(3.14 * r * r * r);
	printf("area of sphere=%0.2f \nvolume of sphere=%0.2f",area,volume);
	vol=(3.14*r*r*h);
	printf("\nvolume of cylinder=%0.2f",vol);
	b=(a*a*a);
	printf("\n Volume of cube=%0.2f",b);
	return 0;
}
