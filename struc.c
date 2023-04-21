//student information//
#include<stdio.h>
struct student{
	int roll;
	char name[10];
	char classroom[4];
};

int main()
{
	struct student student1;
	printf("roll: ");
	scanf("%d", &student1.roll);
	printf("\n name: %s");
	scanf("%s",&student1.name);
	printf("\n classroom: %s");
	scanf("%s",&student1.classroom);
	return 0;
}
