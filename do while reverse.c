//WAP reverse number// 123 
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	do{
		printf("%d",n%10);
			n=n/10;	
}
	while(n!=0);
	return 0;
}
