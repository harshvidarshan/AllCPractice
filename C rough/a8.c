//count pos,neg n zer in 2D array..//
#include<stdio.h>
int main()
{
	int i,j,arr[3][3],pos=0,neg=0,zer=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter array elements:");
			scanf("%d",&arr[i][j]);
			if(arr[i][j]>0)
			{
				pos=pos+1;
			}
			else if(arr[i][j]<0)
			{
				neg=neg+1;
			}
			else{
				zer=zer+1;
			}
		}
	}
	printf("pos=%d,neg=%d,zer=%d",pos,neg,zer);
	return 0;
}
