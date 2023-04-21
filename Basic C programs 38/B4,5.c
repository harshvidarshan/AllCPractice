/*WAP That prints numbers 1 to 4 on same line,using following method
a)Using one printf statement with no conversion specifies.
b)Using one printf statementwith four conversion specifies.
c)Using four printf statements. */
#include<stdio.h>
int main()
{
	//a
	printf("1 2 3 4");
	//b
	int a=1,b=2,c=3,d=4;
	printf("\n%d %d %d %d",a,b,c,d);
	//c
	printf("\n1");
	printf(" 2");
	printf(" 3");
	printf(" 4");
	//5th 
	printf("\n*");
	printf("\n* *");
	printf("\n* * *");
	printf("\n* * * *");
	return 0;
}


