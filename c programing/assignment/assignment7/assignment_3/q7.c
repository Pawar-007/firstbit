// Check the given number is Strong number or not.Input : n = 145 Output : Strong
#include<stdio.h>
int factorial(int num)
{
   int temp = 1;
   while (num > 0)
   {
      temp*=num;
      num--;
   }
   return temp;
}
int isStrong(int* num){
   int sum=0;
   int temp=*num;
   while(temp>0){
      sum += factorial(temp%10);
      temp/=10;
   }
   return sum==*num;
}
void main(){
   int i=14;
   isStrong(&i)?printf("strong"):printf("weak");
}