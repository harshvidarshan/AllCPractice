#include<stdio.h>
int printstar(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%c",'c');
	}
}
int enternumber()//no parameters taken 
{
	int i;
	printf("i:");
	scanf("%d",&i);
	return i;
}
int hi()
{
	int h;
	printf("h:");
	scanf("%d",&h);
}
int main(){
	int c;
//	printstar(7);
/*c= enternumber();
printf("%d is entered number",c);*/
c=hi();
printf("%d is 2nd entered number",c);

}
