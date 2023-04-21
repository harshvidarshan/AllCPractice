#include<stdio.h>
int main()
{
	int secs;
	int hours;
	int minutes;
	int seconds;
	
	printf("Enter the value secs: ");
	scanf("%d",&secs);
	
	hours=secs/3600;
	printf("\n Enter the value hours:%d",hours);

	
	minutes=(secs-(3600*hours))/60;
    printf("\n Enter the value minutes:%d",minutes);
	
	seconds=(secs-(3600*hours)-(minutes*60));
	printf("\n Enter the value seconds:%d",seconds);
	return 0;
	
}
