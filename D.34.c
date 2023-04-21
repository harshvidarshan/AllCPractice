//WAP that tests value of integer num1. If value is 10,square num1..if value is 9 read a new value into num1..if it is 2 or 3, multiply by 99 and print out result 
//implement your code using nested if//
#include<stdio.h>
int main()
{
	int num1,num2,num3,num;
	printf("Enter num1: ");
	scanf("%d",&num1);
	if(num1>=0)
	{
		if(num1==10)
		{
			num=num1*num1;
			printf(" %d ",num);
		}
		else if(num1==9)
		{
			num3=num1;
			printf("%d",num3);
		}
		else if(num1==2 || num1==3)
		{
			num2=num1*99;
			printf("%d",num2);
		}
	}
	return 0;
}
