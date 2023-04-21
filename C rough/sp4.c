//structure using pointer
#include<stdio.h>
struct student{
	int roll;
	int cl;
};
int main()
{
	struct student *stdptr, s1;
	stdptr=&s1;
	printf("roll: ");
	scanf("%d",&stdptr->roll);
		printf("class: ");
	scanf("%d",&stdptr->cl);
	return 0;;
}
