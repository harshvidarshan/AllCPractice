#include<stdio.h>
#include<conio.h>
#define SIZE 20
int main (void)
{
size_t i;
int numberList[SIZE] =
{ 0 };
int numbers = 0;
int count = 0;
int duplicate = 0;
int duplicateFlag = 0;

for (i = 1; i <= SIZE; i++)
{
printf ("%i. Enter a number between 10 and 100, inclusive: ", i);
scanf ("%d", &numbers);

duplicateFlag = 0;

while (numbers >= 100 || numbers <= 10)
   {

   printf ("Invalid number\n");
   printf ("%i. Enter a number between 10 and 100, inclusive: ", i);
   scanf ("%d", &numbers);
   }

for (duplicate = 0; duplicate < i; duplicate++)
   {
   if (numbers == numberList[duplicate])
   {
   duplicateFlag = 1;
   break;
   }

   }
if (duplicateFlag == 0)
   {
   numberList[i] = numbers;
   }

}
printf ("\n The non duplicate values are: ",numberList[duplicate]);
for (i = 0; i < count; i++)
{
printf ("%d\n", numberList[i]);
}
printf ("\n");
return 0;
}

