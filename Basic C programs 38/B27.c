//5 diff marks of student are input through keyboard.find out aggregrate marks and % marks ,max. marks =100//
#include<stdio.h>
int main()
{
	float a,b,c,d,e,ave,per,tot;
	printf("a: ");
	scanf("%f",&a);
		printf("b: ");
	scanf("%f",&b);
		printf("c: ");
	scanf("%f",&c);
		printf("d: ");
	scanf("%f",&d);
		printf("e: ");
	scanf("%f",&e);
	tot=a+b+c+d+e;
	ave=(tot)/5;
	per= (tot/500)*100;
	printf("Total:%0.2f",tot);
	printf("\n Average:%0.2f",ave);
	printf("\n Percentage:%0.2f",per);
	return 0;
}
