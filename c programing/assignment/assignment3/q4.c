// Check the given number is prime or not.Input : n = 7 Output : Prime
#include<stdio.h>
void main(){
   int num=10;
   int mid=num/2;
   int i=2;
   while(i<=mid){
      if(num%10==0){
         printf("given number is not an prime number ");
         return;
      }
      i++;
   }
   printf("given number is prime number");
}