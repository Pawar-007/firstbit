// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

#include <stdio.h>
int factorial(int n)
{
   int fact = 1;
   while (n > 0)
   {
      fact = fact * n;
      n--;
   }
   return fact;
}
void isStrongNumber(int num){
   int org = num;
   int sum = 0;
   while (num > 0)
   {
      int x = num % 10;
      sum = sum + factorial(x);
      num = num / 10;
   }
   if (sum == org)
      printf("given number  %d is strong number ", org);
   else
      printf("given number  %d is not strong number ", org);
}
void main()
{
   int num = 40585;
   isStrongNumber(num);
}