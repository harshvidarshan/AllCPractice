//Construct C programs to print following patterns using loop//
//lp7.1
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;i>=j;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
