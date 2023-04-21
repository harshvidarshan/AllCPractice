#include <stdio.h>

int main(void) {
	// your code goes here
    int t, n, a[100],i,j;
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
            for(j=i+1;j<n;j++)
            {
                if(a[i]<=a[j])
                {
                    printf("YES\n");
                }
                else if(a[i]>=a[j])
                {
                    printf("NO\n");
                }
            }
        }
    }
    
	return 0;
}


