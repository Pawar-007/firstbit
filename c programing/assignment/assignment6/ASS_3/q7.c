// Find factorial of given number.Input : n = 5 Output : 120
#include<stdio.h>
void factorial(int x);
int returnFactorial(int n);
void main(){
   int n=5;
   factorial(n);
   int fact=returnFactorial(n);
   printf("\n factorial %d",fact);

}
int returnFactorial(int n)
{
   int ans = 1;
   while (n > 0)
   {
      ans *= n;
      n--;
   }
   return ans;
}
void factorial(int num)
{
   int ans = 1;
   int n=num;
   while (n > 0)
   {
      ans *= n;
      n--;
   }
   printf("factroial of %d is %d",num,ans);
}