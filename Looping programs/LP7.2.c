//Construct C programs to print following patterns using loop//
//lp7.2
#include<stdio.h>
int main()
{
		int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("#");
		}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
