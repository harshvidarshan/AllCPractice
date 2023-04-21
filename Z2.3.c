#include<stdio.h>
int main()
{
	float perimeter;
	int radius;
	printf("Enter the radius of circle: ");
	scanf("%d",&radius);
	perimeter = 2 * 3.14 * radius;
	printf("\n Enter perimeter of circle:%.2f",perimeter);
	return 0;
}
