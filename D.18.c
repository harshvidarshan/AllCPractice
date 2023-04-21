//leap year or not using logical operator//
#include<stdio.h>
int main()
{	
	int a;
	printf("Enter year: ");
	scanf("%d",&a);
	if(a%400 == 0 && a%100 == 0 && a%4 == 0)
	printf("Leap Year");
	if(a%400!=0 || a%100!=0 || a%4!=0)
	printf("Not leap year");
	return 0;
}
