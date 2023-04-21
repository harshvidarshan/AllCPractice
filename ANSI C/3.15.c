#include<stdio.h>
int main()
{
	int a,b,c,s,l;
	  scanf("%d", &a);
	  scanf("%d", &b);
	  scanf("%d", &c);
	  printf("\nsum:%d",a+b+c,a,b,c);
	  printf("\nAve:%d",(a+b+c)/3,a,b,c);
	  s=(a<b?a:b)>(a<c?a:c)?(a<b?a:b):(a<c?a:c);
	  printf("\nSmallest:%d",s);
	  l=(a>b?a:b)>(a>c?a:c)?(a>b?a:b):(a>c?a:c);
	  printf("\nLargest:%d",l);
}
