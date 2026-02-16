//5 Print strong numbers in the given range 1 to n.
#include<stdio.h>
int factorial(int n){
   int temp=n;
   int pro=1;
   while(temp>0){
      pro*=temp;
      temp--;
   }
   return pro;
}
void main(){
   int num=150;
   for(int i=1;i<=num;i++){
      int temp=i,sum=0;
      while(temp>0){
         sum+=factorial(temp%10);
         temp=temp/10;
      }
      if(i==sum){
         printf("%d a strong number\n",i);
      }
   }
}