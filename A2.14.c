#include<stdio.h>
int main()
{
	int side;
	float volume;
	printf("Enter the side of cube: ");
	scanf("%d",&side);
	
	
	volume=side*side*side;
	printf("The Volume is:%.2f",volume);
	
}
