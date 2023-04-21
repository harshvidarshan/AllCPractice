#include<stdio.h>
int main()
{
	int a,n,b;
	a=1;
	printf("Enter value n: ");
	scanf("%d",a);
	while(b=a*9)
	{
		printf("\n %d",b);
		b=b+1;
	}
	return 0;
}
