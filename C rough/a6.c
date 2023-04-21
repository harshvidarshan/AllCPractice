//count odd and even array elements..
#include<stdio.h>
int main()
{
	int i,n,arr[100],odd=0,eve=0;
		printf("n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Array elements: ");
		scanf("%d",&arr[i]);
		if(arr[i]%2!=0)
		odd=odd+1;
		else
		eve=eve+1;
	}
	printf("Odd no.:%d",odd);
	printf("\nEven no.:%d",eve);
	return 0;
}
