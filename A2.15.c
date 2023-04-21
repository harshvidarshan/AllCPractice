#include<stdio.h>
int main()
{
	int base,exponent,answer;
	printf("Enter the base value: ");
	scanf("\nbase value=%d",&base);
	
	printf("\nEnter the exponent value:  ");
	scanf("\nexponent value=%d",&exponent);
	
	answer=Pow(base,exponent);
	printf("\n answer=%d",answer);
	return 0;
}

