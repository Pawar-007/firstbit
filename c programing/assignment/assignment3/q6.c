// Check the given number is Perfect number or not.Input : n = 28 Output : Perfect
#include<stdio.h>
void main(){
   int n=89;
   int i=1,sum=0;
   while(i<=n/2){
      if(n%i==0){
         sum+=i;
      }
      i++;
   }
   if(n==sum)printf("%d is a perfect number ",n);
   else printf("%d is the not perfect number ",n);

}