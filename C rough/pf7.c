//pointer*,address&
#include<stdio.h>
int main()
{
	int i,n;
	int* ptra=&n;
	int * pt2=NULL;
	printf("Enter number:");
	scanf("%d",&n);
	printf("\n %d value",*ptra);
	printf("\n %d address",&ptra);
		printf("\n %d value",n);
		printf("\n %d null",pt2);
	printf("\n %d address",&n);
}

