#include<stdio.h>
#include<ctype.h>
int main()
{
	float base,exponent,answer;
	printf("Enter the base value: ");
	scanf("%f",&base);
	
	printf("\n Enter the exponent value:  ");
	scanf("%f",&exponent);
	
	answer=pow(base,exponent);
	printf("\n answer=%f",answer);
	return 0;
}

