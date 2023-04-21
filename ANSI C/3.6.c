#include<stdio.h>
int main()
{
	int dep,pp,y;
	float sv;
	printf("pp: ");
	scanf("%d",&pp);
	printf("dep: ");
	scanf("%d",&dep);
	printf("y: ");
	scanf("%d",&y);
	sv=pp-(dep*y);
	printf("sv:%f",sv);
}
