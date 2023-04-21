////Construct C programs to print following patterns using loop//
//lp7.6
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		   printf("* ");
	}
		for(k=i;k<=3;k++)
		{
			printf(" ");
		}
	printf("\n");
	}
	return 0;
}
