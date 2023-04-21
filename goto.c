//odd numbers between 1 to n//
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n: ");
	scanf("%d",&n);
	odd:
		{
			if(i%2!=0)
			printf("%d\n",i);
		}
		i=i+1;
		if(i<=n)
		{
			goto odd;
		}
		return 0;
	}
