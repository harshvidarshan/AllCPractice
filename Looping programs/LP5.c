//WAP to check whether a given string is palindrome or not..//
#include<stdio.h>
int main()
{
	char s[1000];
	int i,n,c=0;
	printf("write any word: ");
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		if(s[i]==s[n-i-1])
		c++;
	}
	if(c==i)
	printf("\n Given word is palindrome",s);
	else
	printf("\n Given word is not palindrome",s);
	return 0;
}
