//print rightmost of an integer//
#include<stdio.h>
int main()
{
	int a,dig,m;
	printf("Enter the digit :");
	scanf("%d",&a);
	dig=a%10;
	m=a/10;
	printf("rightmost digit is %d \nleftmost digit is %d",dig,m);
}
