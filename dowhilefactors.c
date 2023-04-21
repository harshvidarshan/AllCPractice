//factors of n using do..while loop//
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n: ");
	scanf("%d",&n);
		do
	{
		if(n%i==0)
		{
		printf("%d\n",i);
}
    i=i+1;
}
	while(i<=n);
	return 0;
	
}
