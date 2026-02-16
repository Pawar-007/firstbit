// Print prime numbers in the given range 1 to n.

#include<stdio.h>
#include<stdbool.h>
void main(){
   int n=34;
   for(int i=2;i<=n;i++){
      bool isPrime=true;
      for(int j=2;j<=i/2;j++){
          if(i%j==0){
            isPrime=false;
            break;
          }
      }
      if(isPrime)printf("%d is a prime number \n",i);
   }
}