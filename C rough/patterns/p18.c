#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int find_nth_term(int n, int a, int b, int c);
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int sa=a,sb=b,sc=c;
  if(n==0)
  {
      return 0;
  }
  else 
  {
      return (a+find_nth_term(n,a,b,c));
  }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
