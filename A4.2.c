//WAP to input number from user and count digits of number// 123 - 3 digits //1-1 digit //09 - 2 digit 
#include<stdio.h>
int main()
{                             
	long long n;
	int dig=0;
	printf("Enter number : ");                     
	scanf("%lld",&n);
	while(n!=0)                        
	{     
	    n=n/10;                                	  
	    dig=dig+1;    
	}
	printf("\n Total digits =%d",dig);
	return 0;
}
