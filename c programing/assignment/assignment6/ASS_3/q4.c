// Check the given number is prime or not.
// Input: n = 7
// Output: Prime.
#include<stdio.h>
void isPrime(int n);
int isPrimeOrNot(int n);
void main(){
   int n=7;
   isPrime(n);
   printf("\n");
   isPrimeOrNot(n) ? printf("%d is prime\n", n) : printf("%d is not prime\n", n);
}
void isPrime(int n){
   int num = n;
   int mid = num / 2;
   int i = 2;
   while (i <= mid)
   {
      if (num % 10 == 0)
      {
         printf("given number is not an prime number ");
         return;
      }
      i++;
   }
   printf("given number is prime number");
}
int isPrimeOrNot(int n){
   int mid=n/2;
   for(int i=2;i<=mid;i++){
       if(n%i==0)return 0;
   }
   return 1;
}