//basic pointer
#include<stdio.h>
int main(void)
{
	int m=10,n,o,*z;
	scanf("n:%d o:%d",&n,&o);
	z=&m;
	printf("\nz stores the address of m :%d",z);
	printf("\nz stores the value of m :%d",*z);
	printf("\n&m stores the address of m :%d",&m);
	printf("\n&n stores the address of n :%d",&n);
	printf("\n&o stores the address of n :%d",&o);
}
