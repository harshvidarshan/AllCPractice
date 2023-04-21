//length and breadth , area is greater than perimeter or not//
#include<stdio.h>
int main()
{
		int l,b;
		int perimeter;
		int area;
		printf("Enter length: ");
		scanf("%d",&l);
		printf("Enter breadth: ");
		scanf("%d",&b);
		area = l * b;
		perimeter = 2*(l+b);
		if(area > perimeter)
		printf("Area is greater than perimeter");
		else
		printf("Area is not greater than perimeter");
		return 0;
}
