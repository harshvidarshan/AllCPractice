// wap to print odd numbers between 1 to n//
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter n: ");
	scanf("%d",&n);

		while(i <= n)
	{
		if(i%2 != 0)
	 printf("\n%d",i);
     i=i+1;
	}
	return 0;
}
