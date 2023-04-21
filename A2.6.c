#include<stdio.h>
int main()
{
	float farenheit,celsius;
	printf("\n Enter the temperature in farenheit: ");
	scanf("%f",&farenheit);
	celsius=(farenheit-32)/(1.8);
	printf("\n celsius:%f",celsius);
	return 0;
}
