//triangle is isosceles,scalene,right angled or equilateral//
#include<stdio.h>
int main()
{
		int a,c,b;
		printf("Enter side 1: ");
		scanf("%d",&a);
		printf("Enter side 2: ");
		scanf("%d",&b);
		printf("Enter side 3: ");
		scanf("%d",&c);
		if(a==b==c)
		{
			printf("Equilateral Triangle");
		}
		else if(a==b!=c  || a!=b==c )
		{
			printf("Isosceles Triangle");
		}
		else if(a*a + b*b ==c*c || a*a+c*c==b*b || b*b+c*c ==a*a)
		{
			printf("Right angled Triangle");
		}
		else if(a!=b || b!=c || c!=a || a!=b!=c)
		{
			printf("Scalene Triangle");
		}
		return 0;
}
