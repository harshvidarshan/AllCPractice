#include<stdio.h>
int main()
{
	int a;
	float m;
	printf("a: ");
	scanf("%d",&a);
	m=a%100;
	printf("m:%0.02f",m);
	return 0;
}
