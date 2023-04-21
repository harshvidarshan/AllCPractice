#include<stdio.h>
int main()
{	 
	int feet;
	float inches;
	printf("Enter the value of feet: ");
	scanf("%d",&feet);
	inches=((12)*feet);
	printf("\n Value of inches is : %.2f",inches);
	return 0;
	
}
