//triangle valid or not , valid when 3 angles sum = 180//
#include<stdio.h>
int main()
{
		int a,b,c,h;
		printf("Enter angles: ");
		scanf("%d \n%d \n%d",&a ,&b ,&c);
		h = a+b+c;
		if(h ==180)
		printf("Triangle is valid");
		else
		printf("Triangle is not valid");
		return 0;
}
