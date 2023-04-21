//count no. of boys whose height > 170cm and weight < 50kg..
#include<stdio.h>
int main()
{
	int i;
	int count=0;
	float h,w;
	printf("Enter height and weight:\n ");
	for(i=1;i<=3;i++)
	{
		scanf("%f %f",&h,&w);
		if(h>170 && w<50)
		{
			count=count+1;
		}
	}
	printf("no. of boys:%d",count);
	return 0;
}
