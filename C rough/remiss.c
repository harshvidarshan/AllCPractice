#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,max;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&a,&b);
	    if(a>=b)
	    {
	        max=a+b;
	        printf("%d %d",a,max);
	    }
	}
	return 0;
}
