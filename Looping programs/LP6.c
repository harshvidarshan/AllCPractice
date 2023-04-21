//WAP to print multiplication table upto n..//
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t multiplication of %d",i);
		for(j=1;j<=n;j++)
		{
			
			printf("\n %d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
