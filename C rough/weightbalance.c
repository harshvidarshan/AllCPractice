#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int w1,w2,x1,x2,m;
        scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m);
        if((w2-w1)>(x1*x2))
        {
            printf("1\n");
        }
        else if((w2-w1)<(x1*x2))
        {
             printf("0\n");
        }
      
    }
    
	return 0;
}



