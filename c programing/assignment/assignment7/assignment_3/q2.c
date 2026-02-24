// Check the given number is Armstrong number or not..Input : n = 153 Output : Armstrong
#include<stdio.h>
void power(int* num,int pow){
   int org=1;
   while(pow>0){
      org*=*num;
      pow--;
   }
   *num=org;
}
int isArmstrom(int* num){
   int temp=*num;
   int count = 0;
   while (temp > 0)
   {
      temp = temp / 10;
      count++;
   }
   int sum = 0;
   temp=*num;
   while (temp > 0)
   {
      int k = temp % 10;
      power(&k,count);
      sum+=k;
      temp = temp / 10;
   }
   return sum==*num;
}
void main(){
    int n=153;
    printf("%d\n",isArmstrom(&n));
}