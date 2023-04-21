#include<stdio.h>
#define ROWMAX 12
#define COLMAX 10
int main()
{
	int row,col,y;
	row=1;
	printf("\t\tMULTIPLICATION TABLE\n");
	printf("----------------------------------------\n");
	do
	{
		col=1;
		do
		{
			y=row*col;
			printf("%4d",y);
			col=col+1;
		}
		while(col<=COLMAX);
		printf("\n");
		row=row+1;
	}
	while(row<=ROWMAX);
	printf("\n---------------------------------------");
	return 0;
}
