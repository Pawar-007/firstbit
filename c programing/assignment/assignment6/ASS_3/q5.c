// Check the given number is Armstrong number or not..Input : n = 153 Output : Armstrongg

#include <stdio.h>
int power(int num, int pow)
{
   int mul = 1;
   while (pow > 0)
   {
      mul = mul * num;
      pow--;
   }
   return mul;
}
int numLength(int num){
   int temp = num;
   int count = 0;
   while (temp > 0)
   {
      temp = temp / 10;
      count++;
   }
   return count;
}
int isArmstrong(int num){
   int orignal = num;
   int sum = 0;
   int count=numLength(num);
   while (num > 0)
   {
      int k = num % 10;
      sum += power(k, count);
      num = num / 10;
   }
   return sum==orignal;
}
void main()
{
   int num = 153;
   printf("%d",isArmstrong(num));
}