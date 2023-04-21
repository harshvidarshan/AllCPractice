//WAP to print series 1 to N using goto statement//
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;                                       /*#include<stdio.h>
 int main()
 {
   int n, i=1;

   printf("Enter a number: ");
   scanf("%d",&n);
   
   start:
   printf("%d\t",i);
   i++;
   if(i<n) goto start;
   
   return 0;
 }*/
	printf("Enter n: ");
	scanf("%d",&n);
	start:
	if(i>=0) 
	{
		printf("%d",sum);
	}
	i++;
	if(i<=n)
	{
		goto start;
	}
	return 0;
}
