//3 sides of triangle //
#include<stdio.h>
int main()
{
	int a,b,c,h;
		printf("Enter side 1: ");
	scanf("%d",&a);
		printf("Enter side2: ");
	scanf("%d",&b);
		printf("Enter side3: ");
	scanf("%d",&c);
	h=(a>b)?(a>c?a:c):(b>c?b:c);

	if(a+b > h && b+c>h && a+c>h)
    printf("\n Triangle is valid");
		else
		
	printf("Triangle is not valid");


	return 0;
}
