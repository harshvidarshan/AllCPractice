#include<stdio.h>
struct kh
{
	int rno;
	char name[100];
};
void main()
{
	struct kh s1;
	scanf("%d",&s1.rno);//dot operator - value assign krva mate .operator no upyog kryo
	scanf("%s",s1.name);
	printf("rno of s1:%d\n",s1.rno);
	printf("name of s1:%s",s1.name);
}
