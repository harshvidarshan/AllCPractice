//read two matrices, first 3*2 and 2*3 , perform multiplication operation 
#include<stdio.h>
void main()
{
	int i,j,k,a[10][10][10],b[10][10][10],c[10][10][10];
	for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Enter elements a[%d][%d]: ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
			for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Enter elements b[%d][%d]: ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j]);
			printf("\nmultiplication of a1 and a2 matrix %d%d: %d\t\n",i,j,c[i][j]);
			}
		}
}
