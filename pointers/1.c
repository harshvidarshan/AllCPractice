#include<stdio.h>
void main()
{
	int h=9,*p,**r;
	p=&h;//h variable nu address pointer variable p ma store kryu
	//access & print
	printf("h:%d\n  &h:%d\n",h,&h);
	//now with the help of pointer
	printf("p:%d\n *p:%d\n",p,*p);
	//pointer nu address print
	printf("&p:%d\n",&p);
	//pointer variable - bija variable nu address store kre 
	//double pointer -is known as pointer to pointer => stores value address of other pointer
	r=&p;//bija pointer nu address r store krse
	printf("r:%d\n &r:%d\n",r,&r);
	//printing value of h using double pointer
	printf("**r:%d",**r); 
}
