#include <stdio.h>

int main(void) {
	// your code goes here
    int t, a, b,c,m,n;
    scanf("%d",&t);
    while(t--)
    {
       // int count=0;
        scanf("%d %d %d",&a,&b,&c);
        if(b>=a && b>=c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
      
        
    }
    
	return 0;
}


