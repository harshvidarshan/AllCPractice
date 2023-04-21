#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,m,n;
	float row,col;
	printf("Row:\n");
	scanf("%f",&row);
	printf("Col:");
	scanf("%f",&col);
	x=sqrt(row+col);
	printf("%f",x);
	return 0;
}
