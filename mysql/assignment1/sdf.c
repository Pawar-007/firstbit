#include<stdio.h>
int sumOfDigit(int,int);
void main(){
   printf("%d",sumOfDigit(123,0));
}
int sumOfDigit(int digit,int sum){
   if(digit==0){
      return sum;
   }
   sum+=(digit%10);
   sumOfDigit(digit/10,sum);
}
