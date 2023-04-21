//absolute value of number entered through keyboard//
#include<stdio.h>
int main()
{
		int a,b;
		printf("Enter number: ");
		scanf("%d",&a);
		if(a<0)
		a=-a;
	    else
		a=a;
		printf("%d",a);
		return 0;
}
