//Construct C programs to print following patterns using loop//
//lp7.4
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5-i;j>=1;j--)
		{
			printf("  ");
		}
			for(j=1;j<=i;j++)
		{
				printf(" %d  ",i);
		}
		printf("\n");
	}
	return 0;
}

