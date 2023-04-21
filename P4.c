#include<stdio.h>
int main()
{
	int a,b,c,largest,m;
	printf("Enter value of a,b and c: ");
	scanf("%d %d %d",&a ,&b, &c);
	m=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d is largest",m);
	return 0;
}
