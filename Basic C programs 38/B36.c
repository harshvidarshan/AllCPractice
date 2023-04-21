//WAP to convert a given no. days to measure of time given in years,week and days//
#include<stdio.h>
#include<conio.h>
int main()
{
	int days,week,years;
	printf("Enter number of days :");
	scanf("%d",&days);
	years=days/365;
	week=(days%365)/7;
	days=days-((years*365)+(week*7));
	printf("Number of years : %d\n",years);
	printf("Number of weeks : %d\n",week);
	printf("Number of days : %d",days);
	return 0;
}
