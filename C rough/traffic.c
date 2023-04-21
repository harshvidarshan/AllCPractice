/*Traffic personnel are trying to clear 
traffic on a busy intersection where ‘N’ = number of lanes meet on the intersection. 
In order for them to efficiently clear the traffic they need to clear lanes one by one.
Select the best possible sequence of lanes that will clear the 
intersection traffic in the least amount of time.

N = number of traffic lanes.

T = time it takes for one lane to empty.

Total amount of time for all lanes = ‘N’ multiplied by ‘T’.

Addition of each lane value is the time(T) it takes to empty that lane.

The same digit in the lane is to be counted only once.

For example,

For lane, [2,3,3,4,5,2], 
it’s time to empty is 14 seconds.

Tell us the order in which the lanes should be opened with time to empty each lane.

Lanes can be of any length.

Constraints

1 <= N <= 10^3

Sample Input

First line will be the number of lanes.

3 //( Number of Test Cases )
[1,2,7,5,4,4]

[2,3,4,5,2,2,1,2]

[5,2,1,3,9,3,6]

Sample Output
[2, 15, 1, 19, 3, 26] 

Explanation
Sample input first line is number of inputs i.e. 3 and following 3 lines are inputs.
Sample output contains the input number followed by it’s time to empty 
thus making output [2, 15, 1, 19, 3, 26]*/

#include<stdio.h>
int main(void)
{
	int a[100],n,t,i,sum=0,k;
	printf("enter array size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d,",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i])
		{
		k=a[i];
	    }
	    sum=sum+a[i];
	}
	sum=sum+k;
	printf("sum:%d",sum);
}
