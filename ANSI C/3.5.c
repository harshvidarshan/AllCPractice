#include<stdio.h>
int  main()
{
	int a;
	printf("a: ");
	scanf("%d",&a);
	printf("%d",a);
	printf("\n%d",a%1000);
	printf("\n%d",a%100);
	printf("\n%d",a%10);
	return 0;
}
