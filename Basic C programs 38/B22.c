//22.WAP input 3 sides of triangle,compute area //
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,perimeter,s,area;
	printf("Enter the first side of the triangle :");
	scanf("%f",&a);
	printf("Enter the second side of the triangle :");
	scanf("%f",&b);
	printf("Enter the third side of the triangle :");
	scanf("%f",&c);
	perimeter=a+b+c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nPerimeter of the triangle =%.2f\n",perimeter);
	printf("Semi Perimeter of the triangle =%.2f\n",s);
	printf("Area of the triangle =%.2f\n",area);
	getch();
}
