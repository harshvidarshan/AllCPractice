#include<stdio.h>
#include<ctype.h>
float main()
{
	float base,exponent,answer;
	printf("Enter the base value: ");
	scanf("\nbase value=%d",&base);
	
	printf("\nEnter the exponent value:  ");
	scanf("\nexponent value=%d",&exponent);
	
	answer=pow(base,exponent);
	printf("\n answer=%d",answer);
	return 0;
}

