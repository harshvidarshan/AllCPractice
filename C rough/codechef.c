#include <stdio.h>

int main(void) {
	// your code goes here
    int t, a[100],n,i,count=0;
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
            if(a[i]>=1000)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    
	return 0;
}


