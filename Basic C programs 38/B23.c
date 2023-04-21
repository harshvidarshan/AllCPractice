//to compute average(w),when pessimetic,most likely and optimistic values are given.The weighted average is 
// computed as w=(a+4b+c)/6
#include<stdio.h>
int main()
{
	float w,a,b,c;
	printf("optimistic value: ");
	scanf("%f",&c);
		printf("most likely: ");
	scanf("%f",&b);
		printf("pessimetic : ");
	scanf("%f",&a);
	w=(a+4*b+c)/6;
		printf("w:%0.2f",w);
		return 0;
}
