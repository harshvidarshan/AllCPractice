//Find factorial of number using function//
#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("Enter n: ");
	scanf("%d",&n);
	f=fact(n);
	printf("f=%d",f);
}
int fact(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
		fact=fact*i;
		return fact;
}
