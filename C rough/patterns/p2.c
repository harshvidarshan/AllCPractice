#include<stdio.h>
void main( )
{
	int i,j;
	for(i=5;i>0;i--)  //for(i=0;i<5;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
