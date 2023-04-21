//WAP that declares an integer variable called num,assigns a value to it,and computes and print out value of variable itself,its square and its cubes//
#include<stdio.h>
int main()
{
	int num,a,b;
	printf("Enter the number :");
	scanf("%d",&num);
	a=num*num;
	b=num*num*num;
	printf("Its square %d",a);
	printf("\nIts cube %d",b);
	return 0;
}
