//any character entered to keyboard,65-90: A-Z,97-122:a-z,48-57:0-9,special symbol:0-47,58-64,91-96,123-127//character entered is capital,small,digit or special//
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
{
		printf("Enter any character: ");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		printf("\n Character entered is capital");
	}
	else if(a>=97 && a<=122)
	{
		printf("\n Character entered is small");
	}
		printf("\n Enter any character: ");
	scanf("%s",&b);
	if(b>=48 && b<=57)
	{
		printf("\n Entered character is number");
	}
	else if( (b>=0 && b<=47) || (b>=58 && b<=64) || (b>=91 && b<=96) || (b>=123 && b<=127))
	{
		printf("\nEntered character is special character");
	}
	return 0;
}
}
