#include<stdio.h>
int main()
{	
	int a;
	printf("Enter the number a: ");
	scanf("%d",&a);
	if(a%2 == 0){
	printf("The number is even");
}
if(a%2 != 0)
	{
		printf("The number is odd");
	}
	return 0;
}
