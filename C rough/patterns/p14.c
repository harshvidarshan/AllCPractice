/* pattern
	*
   **
  ***
   **
    * 
*/
#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=(n-1);k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=(n-1);k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
}

