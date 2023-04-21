//farenheit to celsius and vice versa//
//c=(f-32)*5/9  f=9/5*c +32
#include<stdio.h>
int main()
{
	float c,f;
/*	printf("celius temp: ");
	scanf("%f",&c);
		f=9/5 * c +32;
	printf("farenheit temp=%0.2f",f); */
		printf("farenheit temp: ");
	scanf("%f",&f);
	c=(f-32)*5/9 ;
	printf("\n celsius temp=%0.2f",c);
	return 0;
}
