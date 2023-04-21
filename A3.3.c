//whether no. is odd or even using bitwise operator//
#include<stdio.h>
int main()
{
		int a;
		printf("Enter number: ");
		scanf("%d",&a);
		if(a & 1 == 1)
		printf("odd"); 
		else 
		printf("even");
		return 0;
}
