//declare 2 time structure and sum
#include<stdio.h>
struct time{
	int hours;
	int min;
	int sec;
};
int main(){
	int c,d,e;
	//time t1
	struct time t1;
	printf("Enter hr of t1: ");
	scanf("%d",&t1.hours);
		printf("Enter min of t1: ");
	scanf("%d",&t1.min);
		printf("Enter sec of t1: ");
	scanf("%d",&t1.sec);
	//time t2
		struct time t2;
	printf("Enter hr of t2: ");
	scanf("%d",&t2.hours);
		printf("Enter min of t2: ");
	scanf("%d",&t2.min);
		printf("Enter sec of t2: ");
	scanf("%d",&t2.sec);
	
	printf("%d %d %d :Time 1",t1.hours,t1.min,t1.sec);
	printf("%d %d %d :Time 2",t2.hours,t2.min,t2.sec);
	
	c=t1.hours+t2.hours;
	d=t1.min+t2.min;
	e=t1.sec+t2.sec;
	printf("Total Time: %d :%d: %d",c,d,e);
}
