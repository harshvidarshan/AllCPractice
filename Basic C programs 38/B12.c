//WAP that asks user to enter two numbers obtains them from the user and prints thier sum,product,difference,quotient and remainder//
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("sum %0.2f+%0.2f=%0.2f",a,b,a+b);
	printf("\ndifference %0.2f-%0.2f=%0.2f",a,b,a-b);
	printf("\nproduct %0.2f*%0.2f=%0.2f",a,b,a*b);
	printf("\nquotient %0.2f/%0.2f=%0.2f",a,b,a/b);
	return 0;
}
