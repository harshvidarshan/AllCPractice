#include <stdio.h>

int main(void) {
	// your code goes here
    int t,i,n,a[100],m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        m=gcd(a[0],a[1]);
        for(i=2;i<n;i++)
        {
            m=gcd(m,a[i]);
        }
        printf("%d\n",(m*n));
    }
    return 0;
}
int gcd(int g, int h)
{
	int j;
    scanf("%d %d",&g,&h);
    for(j=0;j<g && j<h ;j++)
    {
        if(g%j==0 && h%j==0)
        {
            return j;
        }
    }
}


