//structure student information
#include<stdio.h>
struct friends{
	char name[40];
	int roll;
};
int main(){
	struct friends f1,f2;
	printf("enter f1 name:");
	scanf("%s",f1.name);
		printf("enter f2 name:");
	scanf("%s",&f2.name);
		printf("enter f1 roll:");
	scanf("%d",&f1.roll);
		printf("enter f2 roll:");
	scanf("%d",&f2.roll);
}


