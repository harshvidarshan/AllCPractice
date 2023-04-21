#include <stdio.h>

int main(void) {
	// your code goes here
    int t,i,n,j,k,l,m,a[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j<l || j<m ;j++)
            {
                if(a[j]%l==0 && a[j]%==0)
                {
                    printf("%d:hi",a[j]);
                }
            }
        }
    }
    
	return 0;
}



