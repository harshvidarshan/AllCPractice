/*Chef has just started Programming, he is in first year of Engineering. Chef is reading about Relational Operators.
Relational Operators are operators which check relatioship between two values. Given two numerical values A and B you need to help chef in finding the relationship between them that is,
First one is greater than second or,
First one is less than second or,
First and second one are equal.*/
/*Input
First line contains an integer T, which denotes the number of testcases. 
Each of the T lines contain two integers A and B.

Output
For each line of input produce one line of output.
This line contains any one of the relational operators
'<' , '>' , '='. */
#include<stdio.h>
int main(void)
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		if(a==b)
		{
			printf("=");
		}
		else if(a>b)
		{
			printf(">");
		}
		else
		{
			printf("<");	
		}
	}
}

