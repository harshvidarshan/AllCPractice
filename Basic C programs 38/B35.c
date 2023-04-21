/*Consider a currency system in which there are notes of 7 denominations,namely,Rs 1,Rs 2
rs 5,rs 10,rs 50, rs 100.If sum of rs N is entered through keyboard,wap to compute smallest no. of notes that will
combine to give rs n */
#include<stdio.h>
#include<conio.h>
int main()
{
	int rs=0,o=0,two=0,fi=0,t=0,f=0, h=0;
	printf("Enter the sum of rupees: ");
	scanf("%d", &rs);
	if(rs>=100)
	{
		h = rs/100;
		rs = rs%100;
	}
	if(rs>=50)
	{
		f = rs/50;
		rs = rs%50;
	}
	if(rs>=10)
	{
		t = rs/10;
		rs = rs%10;
	}
	if(rs>=5)
	{
		fi = rs/5;
		rs = rs%5;
	}
	if(rs>=2)
	{
		two = rs/2;
		rs = rs%2;
	}
	if(rs>=1)
	{
		o = rs;
	}
	printf(" Rs 100 = %d\n",h);
	printf("Rs 50 = %d\n",f);
	printf("Rs 10 = %d\n",t);
	printf("Rs 5 = %d\n",fi);
	printf("Rs 2 = %d\n",two);
	printf("Rs 1 = %d",o);
	if(h<f && h<t && h<fi && h<two && h<o)
	{
		printf("%d is smallest",h);
	}
	else
	{
		if(f<t && f<fi && f<two && f<o)
		{
			printf("\n %d is smallest",f);
		}
		else
		{
			if(t<fi && t<two && t<o)
			{
				printf("\n %d is smallest",t);
			}
			else
		{
		if(fi<two && fi<o)
				{
					printf("\n %d is smallest",fi);
				}
				else
				{
					if(two<o)
					{
						printf("\n %d is smallest",two);
					}
					else
					{
						printf("\n %d is smallest",o);
					}
				}
			}
		}
	}
	return 0;
}
