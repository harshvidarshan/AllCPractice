//WAP that enter an angle measured in radians and convert it into degrees.
//1 radian=57.295779 degrees
#include<stdio.h>
int main()
{
	float a,d;
	printf("angle: ");
	scanf("%f",&a);
	int r =57.295779;
	d= (a/3.14) * r;
	printf("%0.2f",d);
	return 0;
}
