//insurance company to calculate premium..WAP to output the person should be insured or not,his/her premium rate
//and max. amt of which he/she can be insured//
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Person's health: ");
	scanf("%s",&a);
	printf("\n Person's age: ");
	scanf("%d",&b);
	printf("\n Person's lives in ");
	scanf("%s",&c);
	printf("\n Sex: ");
	scanf("%s",&d);
	if(a=='excellent' && b>=25 && b<=35 && c=='city' && d=='male')
	{
		printf("\n Premium is RS. 4 per thousand and policy can't exceed Rs.2lakhs");
	}
	else if(a=='excellent' && b>=25 && b<=35 && c=='city' && d=='female')
	{
		printf("\n Premium is Rs.3 per thousand and policy can't exceed Rs.1lakhs");
	}
	else if(a=='poor' && b>=25 && b<=35 && c=='city' && d=='male')
		{
		printf("\n Premium is Rs.6 per thousand and policy can't exceed Rs.1000");
	}
	else
	{
		printf("\n Person is not insured");
	}
	return 0;
}
