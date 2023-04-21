//whether no. is +ve , -ve or zero using else if ladder//
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Number: ");
	scanf("%d",&a);
	if(a>0)
	printf("Number is positive");
	else if(a<0)
	printf("Number is negative");
	else
	printf("Number is ZERO");
	return 0;
}
