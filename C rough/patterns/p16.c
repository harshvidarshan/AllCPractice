/*
	  *
    * * *
  * * * * *
* * * * * * * 
  * * * * *
    * * *
      *
*/
#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(k=1;k<=(i-1);k++)
	{
		printf(" ");
	}
	for(j=1;j<=n;j++)
	{
		printf("*");
	}
	printf("\n");
	}
	
}
