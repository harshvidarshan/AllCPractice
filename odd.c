//wap to find odd no.s between 1 to n//
#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	printf("Enter n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2 != 0)
		printf("%d\n",i);
		i=i+1;
	}
	return 0;
}
