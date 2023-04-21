//Two no.s are input through keyboard into two loacations C and D.WAP to interchange the contents of C and D//
#include<stdio.h>
int main()
{
	int c,d,temp;
	printf("c: ");
	scanf("%d",&c);
	printf("d: ");
	scanf("%d",&d);
	c=c+d;
	d=c-d;
	c=c-d;
    printf("\nThe interchanged value of C : %d",c);
	printf("\nThe interchanged value of D : %d",d);
	return 0;
}
