// 8 Check the given number is Strong number or not.Input : n = 145 Output : Strong
// a positive integer that equals the sum of the factorials of its individual digits.

#include<stdio.h>
int factorial(int n){
     int fact=1;
     while(n>0){
      fact=fact*n;
      n--;
     }
     return fact;
}
void main(){
   int num=40585;
   int org = num;
   int sum = 0;
   while (num > 0)
   {
      int x=num%10;
      sum=sum+factorial(x);
      num=num/10;
    }
    if(sum==org)printf("given number  %d is strong number ",org);
    else
       printf("given number  %d is not strong number ", org);
}