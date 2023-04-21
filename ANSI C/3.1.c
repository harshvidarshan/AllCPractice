#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	printf("values of x,y & z: ");
	scanf("%d %d %d",&x,&y,&z);
	x=y;
	printf("Rotate value of x:%d",x);
		y=z;
	printf("\nRotate value of y:%d",y);
		z=x;
	printf("\nRotate value of z:%d",z);
	return 0;
}
