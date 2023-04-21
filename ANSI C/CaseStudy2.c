#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,r1,r2,d;
	printf("values of a,b & c: ");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("\n Roots are imaginary");
	}
	else
	{
		r1=(-b + sqrt(d))/(2.0*a);
		r2=(-b - sqrt(d))/(2.0*a);
		printf("\nroot1:%0.2f \nroot2:%0.2f",r1,r2);
	}
	return 0;
}
