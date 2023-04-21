#include<stdio.h>
int main()
{
	float a,b;
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("**LIST OF ITEMS**");
	printf("\nItem\t\tPrice");
	printf("\nRice\t\tRs.%0.2f",a);
	printf("\nSugar\t\tRs.%0.2f",b);
	return 0;
}
