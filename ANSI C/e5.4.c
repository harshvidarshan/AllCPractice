//using nested if else find largest of three numbers//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d",a);
		}
		else{
			printf("%d",c);
		}
	}
	else{
		if(c>b)
		printf("%d",c);
		else
		printf("%d",b);
	}
}
