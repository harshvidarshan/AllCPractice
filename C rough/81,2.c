/*8
Using Conditional operator (expr1?expr2:expr3)
a. WAP to find out largest number from given 2 numbers
b. WAP to find out largest number from given 3 numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int m,n;
	m=(a>b?a:b);
	printf("%d is largest from 2 numbers\n",m);
	int p=(b>c?b:c);
	n=(m>p?m:p);
	printf("%d is largest from 3 numbers",n);
	
}
