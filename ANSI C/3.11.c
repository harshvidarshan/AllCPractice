#include<stdio.h>
int main()
{
	int a,l,ls,lt,lf,p,m,sum;
	printf("a: ");
	scanf("%d",&a);
	l=a%10;
	printf("\n%d",l);
	lf=a/1000;
	m=a%1000;
	printf("\n%d",lf);
	lt=m/100;
	p=a%100;
	printf("\n%d",lt);
	ls=p/10;
	printf("\n%d",ls);
	sum=l+ls+lt+lf;
	printf("\n sum:%d",sum);
	return 0;
}
