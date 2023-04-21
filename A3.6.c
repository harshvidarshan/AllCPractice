//check whether character is alphabet, digit or special character//
#include<stdio.h>
int main()
{
 char ch;
 printf("Input Any Character :");
 scanf("%c",&ch);
 if(ch>='0' && ch<='9')
 {
  printf("\n Input Character is Digit");
 }
 else if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
 {
  printf("\n Input Character is alphabet");
 }
 else
 {
  printf("\n Input Character is Special Character");
 }
 return 0;
}
