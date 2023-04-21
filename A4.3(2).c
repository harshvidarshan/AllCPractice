//input number from user and check whether number is palindrome or not//
#include<stdio.h>
int main()
{
	int num,n,rev=0;
	printf("Enter number: ");
	scanf("%d", &n);
	num=n;
	while(n!=0)
	{
		rev= (rev * 10) + (n % 10);
		n = n/10 ;
	}
	if(num==rev)
	printf("\n %d is palindrome number",num);
	else
	printf("\n Given no. is not palindrome number",num);
	return 0;
}
