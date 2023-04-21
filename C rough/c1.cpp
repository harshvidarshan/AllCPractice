#include <stdio.h>

int main(void) {
	// your code goes here
    int t, a, i,ans,count=0 ;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        for(i=0;i<=a;i++)
        {
        	if(i==5)
        	{
        		ans=(i)-1;
			}
			else
			{
				ans=i;
			}
		}
		printf("%d\n",ans);
    }
    
	return 0;
}


