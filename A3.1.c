//maximum of two numbers using simple if//
#include<stdio.h>
int main()
{
		int a,b;
		int Maximumnumber;
		printf("Enter a: ");
		scanf("%d",&a);
		printf("\n Enter b: ");
		scanf("%d",&b);
		if(a>b || b>a)
		printf("%d is a maximum number");
		return 0;
}
