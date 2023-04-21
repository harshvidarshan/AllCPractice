#include<stdio.h>
#define a 9.8
int main()
{
	float d,u;
	int t;
	printf("u,t: ");
	scanf("%f %d",&u,&t);
	d=(u*t + (a*t*t))/2;
	printf("d:%0.2f",d);
	return 0;
}
