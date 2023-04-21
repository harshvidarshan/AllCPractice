#include<stdio.h>
int main()
{
int a,b;
int sum;
scanf("%d%d",&a,&b);
sum = a + ~b + 1;
printf("Difference of two integers: %d",sum);
return 0; 
}
