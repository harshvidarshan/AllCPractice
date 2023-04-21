//mul of 2D matrix//
#include<stdio.h>
int main()
{
	int r,c,a[10][10],b[10][10],mul[10][10],i,j;
	printf("Enter rows: ");
	scanf("%d",&r);
	printf("Enter cols: ");
	scanf("%d",&c);	
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a%d%d-",i+j,i+j);
			scanf("%d",&a[i][j]);
		}
	}
	
		for(i=0;i<r;++i)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter b%d%d-",i+j,i+j);
			scanf("%d",&b[i][j]);
		}
	}
	//mul 
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			mul[i][j]= a[i][j]* b[i][j];
		}
	}
	//print result
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			 printf("%d  ", mul[i][j]);
      if (j == c - 1)
	   {
        printf("\n\n");
      }
		}
	}
}
