//whether alphabet lower character or not and special symbol or not(using conditional operator)//
#include<stdio.h>
int main()
{	
	int H;
	int a=97;
	int z=122;
	int number;
	
	printf("Enter value of alphabet: ");
	scanf("%d",&a);
	a++;
	(97>=a && 122<=a)?printf("\n given character is a lower case alphabet") : printf("\n given character is not a lower case alphabet ");
	
	return 0;
}
