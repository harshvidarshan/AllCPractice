////Construct C programs to print following patterns using loop//
//lp7.5
#include<stdio.h>
int main()
{
	int j,k,m=1,n=5;
	char ch='A';
	for(k=1;k<=n;k++)
	{
		for(j=n-k;j>=1;j--)
		{
			printf(" ");
		}
		for(j=1;j<=k;j++)
		{
			if(k%2==0)
			{
				printf("%c ",ch);
				ch++;
			}
			else
			{
				printf("%d ",m);
				m++;
			}
		}
		printf("\n");
	}
	return 0;
}

