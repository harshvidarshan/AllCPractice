//in equation ax^2+bx+c=0,b^2-4ac=0 no. of roots is one...if b^2-4ac>0 no. of roots two and b^2-4ac<0 no roots
// eqn to find roots is (-b+- (b^2-4ac)^1/2 )/2a ..for above WAP that reads value of a,b,c and computes roots..
//if no roots program should print appropriate message
#include<stdio.h> 
int main()
{
	int a,b,c,d,root1,root2,img;
	printf("value of a: ");
	scanf("%f",&a);
	printf("\n value of b: ");
	scanf("%f",&b);
	printf("\n value of c: ");
	scanf("%f",&c);
	d=((b*b)-(4*a*c));
	if(d=0)
	{
		root1=root2= -b/(2*a) ;
		printf("\n the two equat and real root exist: %0.2f and %0.2f",root1,root2);
	}
	else if(d>0)
	{
		root1=(-b + sqrt(d)) / (2*a) ;
		root1=(-b - sqrt(d)) / (2*a) ;
		printf("\n Two distinct and real roots exist: %0.2f and %0.2f",root1,root2);
	}
	else 
	{
		root1=root2= (-b/(2*a));
		img= sqrt(-d)/(2*a);
		printf("Two distinct complex roots exist: %0.2f and %0.2f",root1,img,root2,img);
	}
	return 0;
}
