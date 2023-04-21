#include<stdio.h>
int main()
{
	int num1,num2,num3,c,d;
	int maximum;
	int largestnumber;
	printf("Enter three numbers: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	c=largestnumber;
    c=(num1 >= num2) ? printf("num1") : printf("num2");
    d=largestnumber;
	d=(c >= num3) ? printf("\n c"): printf("\n num3");
	printf("\n largest number = %d",d);
	
   	return 0;
}
