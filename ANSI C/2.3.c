#include<stdio.h>
int main()
{
	int i,count=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			printf("\n %d",i);
				count=count+1;
		}
	
	}
	printf("\n total numbers:%d",count);
	return 0;
}
