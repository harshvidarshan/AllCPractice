//develop a program to perform addition of two matrix//
#include<stdio.h>
int main()
{
	int i,j,m,n,array[20][20];
	int array1[20][20];
	int sum=0;
	for(i=0;i<1;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("Enter array elements: ");
			scanf("%d",&array[i][j]);
		}
	}
		for(i=0;i<1;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
	for(m=0;m<1;m++)
	{
		for(n=0;n<1;n++)
		{
			printf("Enter array1 elements: ");
			scanf("%d",&array1[m][n]);
		}
	}
		for(m=0;m<1;m++)
	{
		for(n=0;n<1;n++)
		{
			printf("%d",array1[m][n]);
		}
		printf("\n");
	}
	for(i=0;i<1;i++)
	{for(j=0;j<1;j++)
	{for(m=0;m<1;m++)
	{for(n=0;n<1;n++)
	sum[i][j]=array[i][j]+array1[m][n];
	}
	}
		printf("%d",sum,array[i][j],array1[m][n]);
	}
	return 0;
}
