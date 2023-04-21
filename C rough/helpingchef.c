/*Write a program, which takes an integer N and if the number is less than 10 
then display "Thanks for helping Chef!" otherwise print "-1".

Input
The first line contains an integer T, total number of testcases.
 Then follow T lines, each line contains an integer N.

Output
For each test case, output the given string or -1 depending on conditions, in a new line.*/
#include<stdio.h>
int main(void)
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("\n%d",&n);
		if(n<=10)
		{
			printf("\nThanks for helping Chef!");
		}
		else
		{
			printf("\n-1");
		}
	}
}
