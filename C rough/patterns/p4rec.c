#include<stdio.h>
#include<time.h>
double pow(double n, double power);
void main()
{
	double cpu_time;
    clock_t st,end;
	double  n,power,ans;
    printf("enter base: ");
    scanf("%lf",&n);
     printf("enter power: ");
    scanf("%lf",&power);
    st=clock();
    ans=pow(n,power);
    printf("ans: %lf\n",ans);
    end=clock();
    cpu_time=((double)(end-st))/CLOCKS_PER_SEC;
    printf("time taken:%lf",cpu_time);
}
double pow(double n, double power)
{
	if(power==0)
	{
		return 1;
	}
	else if(power>0)
	{
		double an=n*pow(n,power-1);
		return an;
	}
	else if(power==1)
	{
		return n;
	}
	else
	{
		return 0;
	}
}
