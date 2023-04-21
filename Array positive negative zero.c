//develop a program to count number of +ve,-ve or zero's in 3*3 matrix//
#include<stdio.h>
int main()
{
	int array[3][3],i,j;
	int positive=0,negative=0,zero=0;
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
        {
		 printf("Enter array element= ");
		scanf("\n%d",&array[i][j]);
	}
			if(array[i][j]>0)
				positive=positive+1;
			else if(array[i][j]<0)
				negative=negative+1;
			else
				zero=zero+1;
		}
		printf("\n%d are positive arrays",positive);
			printf("\n%d are negative arrays",negative);
				printf("\n%d are zero arrays",zero);
		return 0;		
				}

