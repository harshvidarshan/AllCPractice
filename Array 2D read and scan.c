// read (scan) 2D array//
#include<stdio.h>
int main()
{
	int array[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter array element: ");
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d",array[i][j]);
	}
	printf("\n");
	}
	return 0;
}
