#include<stdio.h>
int main()
{
	int a,b,c,l,s,ss;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	l=(a>b?a:b)>(a>c?a:c)?(a>b?a:b):(a>c?a:c);
	printf("largest no.:%d",l);
	s=(a<b?a:b)>(a<c?a:c)?(a<b?a:b):(a<c?a:c);
	ss=(a<b?a:b)<(a<c?a:c)?(a<b?a:b):(a<c?a:c);
	printf("\n In Ascending Order::%d\t%d\t%d",ss,s,l);
	return 0;
}
