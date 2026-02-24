// Check the given number is prime or not.
// Input: n = 7
// Output: Prime
#include<stdio.h>
void isPrime(int* n){
   int i=2;
   while(i<*n){
      if(*n%i==0){
         printf("Not Prime");
         return;
      }
      i++;
   }
   printf("Prime");
}
void main(){
   int x=7;
   isPrime(&x);
}