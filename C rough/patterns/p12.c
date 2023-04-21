/*
Example 8: Inverted full pyramid of *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(k=0;k<(5-i);k++)
		{
			printf(" ");
		}
		for(j=i;j<=(2*i-1);j++)
		{
			printf("* ");
		}
		for(j=0;j<(i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

