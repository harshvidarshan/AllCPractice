#include<stdio.h>
#include<math.h>
int main()
{
	int x=0,x1=4,y=0,y1=5;
	float d,ar,r,p;
	d=sqrt(((x1-x)*(x1-x))+ ((y1-y)*(y1-y)));
	printf("d:%f",d);
	r=d/2;
	ar=3.14*r*r;
	p=2*3.14*r;
	printf("\n area:%f",ar);
	printf("\n perimeter:%f",p);
	return 0;
}
