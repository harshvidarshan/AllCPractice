//2 * 2 matrices and perform addition of matrices into third matrices & print it
#include<stdio.h>
void main()
{
	int i,j,n=2,a[10][10],b[10][10],c[10][10];
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("Enter elements a[%d][%d]: ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
			for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("Enter elements b[%d][%d]: ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				
				c[i][j]=a[i][j]+b[i][j];
				printf("\nc(third matrix)c[%d][%d]:%d ",i,j,c[i][j]);
			}
		}
}
