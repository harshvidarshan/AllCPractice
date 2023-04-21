//input the number and determine whether it is within given range,the low to high value range may be input by user rather then fixed by the program//
#include<stdio.h>
int main()
{
	float range;
	printf("Enter range: ");
	scanf("%f",&range);
	if(0<=range && range<=1000)
	{
		printf("it is in range");
	}
	else
	{
		printf("it is not in range");
	}
	return 0;
}
