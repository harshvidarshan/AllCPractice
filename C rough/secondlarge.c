//second largest number
/*Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input
The first line contains an integer T, the total number of testcases.
Then T lines follow, each line contains three integers A, B and C.

Output
For each test case, display the second largest among A, B and C, in a new line.*/
#include<stdio.h>
int main(void)
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a>=b && a>=c)
		{
			if(b>=c)
			printf("%d",b);
			else
			printf("%d",c);
		}
		else if(b>=c && b>=a)
		{
			if(c>=a)
			printf("%d",c);
			else
			printf("%d",a);
		}
		else
		{
			if(a>=b)
			printf("%d",a);
			else
			printf("%d",b);
	}
}
	return 0;
}
