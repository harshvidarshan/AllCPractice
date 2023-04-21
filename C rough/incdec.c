//increment & decrement
#include<stdio.h>
int main(void)
{
	int a,b,c;
	a=10,c=15;
	b=a + (c++);
	printf("b1: %d",b);
	b=(a++)+(++c);
	printf("\nb2: %d",b);
	b=(++a)-(c++);
	printf("\nb3: %d",b);
}
