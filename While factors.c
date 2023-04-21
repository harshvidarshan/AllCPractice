//WAP to print factors of n//
#include<stdio.h>
int main()
{
   	int i=1,n,fact;
   	fact=1;
	   printf("Enter n to find factors: ");
	   scanf("%d",&n);
	   while(i <= n)
	   {
	   	fact=fact*1;
	   		i=i+1;
	   }
	   printf("factorial of %d is %d",n , fact);
	   return 0;
}
