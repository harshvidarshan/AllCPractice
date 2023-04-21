//initialize 3 dimensional array threed[3][2][3]..print first and last element of array
#include<stdio.h>
int main()
{
	int i,j,k,arr[3][2][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("Enter array elements: ");
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("Enter 1st element:%d",arr[0][0][0]);
	printf("\nEnter last element:%d",arr[2][1][2]);
	return 0;
}
