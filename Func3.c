//WAP to calculate the power of a number//
#include<stdio.h>
void pow(int , int);
void main()
{
		int x,y,power;
		printf("x: ");
	scanf("%d",&x);
	printf("y: ");
	scanf("%d",&y);
	pow(x,y);
}
void pow(int x,int y)
{
    int power;
    pow(x,y);
	printf("%d ^ %d =%d",(x,y));
}
