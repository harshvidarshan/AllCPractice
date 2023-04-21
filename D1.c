//leap year or not//
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Year : ");
	scanf("%d",&a);

		if(a%400 == 0)
	{
	printf("\n leap year");
}
    else if(a%100 == 0)
{
	printf("\n leap year");
}
    else if(a%4 == 0)
{
	printf("\n leap year");
}
	
       else
	{
		printf("\n Not leap year");
	}
	return 0;
}
