//WAP to recieve value of latitude and longitude in degrees,of two places on earth and outputs the distance between them in nautical miles.
//the formula of nautical miles D= 3963 cos(inverse)(sinL1sinL2+cosL1cosL2*cos(G2-cosG1))
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2,D;
	printf("Enter values of longitude :");
	scanf("%f%f",&g1,&g2);
	printf("Enter values of latitude :");
	scanf("%f%f",&l1,&l2);
	D=3963*cos(-1)*(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
	printf("Distance is %0.2f",D);
	getch();
}
