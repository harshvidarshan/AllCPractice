//multiplication of 2D arrays//
#include<stdio.h>
int main()
{
	int i,j,h[1][1];
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("Array elements: ");
			scanf("%d",&h[i][j]);
		}
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d",h[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d*%d=%d",h[i][j]);
		}
		printf("\n");
}
	return 0;
}
