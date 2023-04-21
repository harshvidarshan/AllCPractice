//find factorial of number..
#include<stdio.h>
int fact(int fact){
	return fact;
}
int main(){
	int a,fact=1,i;
	printf("a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact*=i;
	}
	printf("fact:%d",fact);
}
