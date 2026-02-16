// Find factorial of given number.Input : n = 5 Output : 120

#include<stdio.h>
void main(){
   int n=6,orig=n;
   int ans=1;
   while(n>0){
      ans*=n;
      n--;
   }
   printf("factorial of %d is %d",orig,ans);
}