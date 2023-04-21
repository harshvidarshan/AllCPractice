#include<stdio.h>
int main()
{
	int secs;
	int hours;
	int minutes;
	int seconds;
	
	printf("Enter the value secs: ");
	scanf("%d",&secs);
	
	hours=3600*secs;
	printf("\n Enter the value hours:%d",hours);

	
	minutes=60*secs;
    printf("\n Enter the value minutes:%d",minutes);
	
	seconds=(1/3600)*hours;
	printf("\n Enter the value seconds:%d",seconds);
	return 0;
	
}
