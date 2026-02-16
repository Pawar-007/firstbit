// Print armstrong numbers in the given range 1 to n.

#include<stdio.h>
#include<stdbool.h>
int power(int num, int pow){
   int pro=1;
   while(pow>0){
      pro*=num;
      pow--;
   }
   return pro;
}
bool isAmstromOrNot(int num){
   int count=0;
   int temp=num;
   while (temp>0){
      count++;
      temp=temp/10;
   }
   temp=num;
   int sum=0;
   while (temp>0){
      sum+=power(temp%10,count);
      temp=temp/10;
   }
   
   return sum==num;
}
void main(){
   int n=9500;
   for(int i=1;i<=n;i++){
      bool isAmstrom = isAmstromOrNot(i);
      if(isAmstrom) printf("%d is the armastrom number \n",i);
   }
}