#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=b || a>=c)
    {
        if(b>=c)
        {
            printf(" %d",b);
        }
    }
    else if(c>=a || c>=b)
    {
        if(a>=b)
        {
            printf(" %d",a);
        }
    }
    else
    {
        if(c>=a)
        {
            printf(" %d",c);
        }
    }
	return 0;
}
