//WAP to find power of numner using loop//
#include<stdio.h>
int main()
{
	int base,exp,power=1,i;
	printf("Enter base: ");
	scanf("%d",&base);
	printf("\n Enter exponent: ");
	scanf("%d",&exp);
    for(i=1;i<=exp;i++)
	{
		power= power*base;
	}
	printf("\n %d ^ %d = %d ",exp,base,power);
	return 0;
}
