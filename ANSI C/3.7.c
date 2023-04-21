#include<stdio.h>
int main()
{
	int a;
	printf("a: ");
	scanf("%d",&a);
	printf("%d\t%d\t%d",a%10,a,a/10);
	return 0;
}
