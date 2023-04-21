// read two numbers and based on these it puts following msg//
#include<stdio.h>
int main()
{
		int a,b,h;
		printf("enter num1: ");
		scanf("%d",&a);
		printf("\n enter num2: ");
		scanf("%d",&b);
		h = a - b;
		if(h>=0)
		{
		printf("\n Difference is positive");
		}
		if(h<0) //else will come in place of if, if in exam//
		{
		printf("\n Difference is negative");	
		}
		return 0;
}
