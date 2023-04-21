#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s;
	float ar;
	printf("a: ");
	scanf("%d",&a);
		printf("b: ");
	scanf("%d",&b);
		printf("c: ");
	scanf("%d",&c);
	s=(a+b+c)/2;
	printf("s:%d",s);
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\narea:%f",ar);
	return 0;
}
