/*
*
**
***
****
*****
****
***
**
* 
*/
#include<stdio.h>
void main()
{
	int i,j,k;
	int n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(i=1;i<=n;i++)
	{
		for(k=(n-1);k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	
}


