#include<stdio.h>
int main()
{

	float average,a,b,c,d;
	int P,R,T,S;
	int area,side,perimeter;
	int radius,diameter;
	
	printf("enter value of a: ");
	scanf("%f",&a);
	printf("\n enter value of b: ");
	scanf("%f",&b);
	printf("\n enter value of c: ");
	scanf("%f",&c);
	printf("\n enter value of d: ");
	scanf("%f",&d);
	average=(a+b+c+d)/4;
	printf("enter value of average:%f",average);
		
	{
	printf("\n enter value P: ");
	scanf("%d",&P);
		
	printf("\nenter value of R: ");
	scanf("%d",&R);
	printf("\n enter value of T: ");
	scanf("%d",&T);
	S=(P*R*T)/100;
	printf("\n enter value of S:%d",S);
}
	{	
	printf("\n enter value of Side: ");
	scanf("%d",&side);
	perimeter=4*side;
	printf("enter value of perimeter:%d",perimeter);
	area=side*side;
	printf("\n enter value of area:%d",area);
	scanf("%f",&a);
	}	
	{
	printf("\n enter value of radius: ");
	scanf("%d",&radius);
	diameter=2*radius;
		printf("\n enter value of diameter:%d",diameter);
	area=3.14*diameter;
	    printf("\n enter value of area:%d",area);
}
	return 0;
	}
