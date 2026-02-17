#include<stdio.h>
int even(int x);
int prime();
int primeOrNot();
void main(){
   int x=8;
   //even or odd
   if(even(x))
      printf("value is even %d\n",x);
   else
      printf("value is odd %d\n", x);
   // prime or not
   if (primeOrNot(x))
      printf("number is prime");
   else printf("number is not prime");
}
int even(int x){
   if(x%2==0)return 1;
   else return 0;
}
int prime(int num){
   for(int i=2;i<num;i++){
      if(num%i==0){
         return 0;
      }
   }
   return 1;
}
int primeOrNot(int num){
   for(int i=2;i*i<=num;i++){
      if(num%i==0){
         return 0;
      }
   }
   return 1;
}