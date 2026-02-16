// Check the given number is Armstrong number or not..Input : n = 153 Output : Armstrong

#include <stdio.h>
int power(int num,int pow){
   int mul=1;
   while(pow>0){
      mul=mul*num;
      pow--;
   }
   return mul;
}
int main()
{
   int num = 152;
   int orignal = num;
   int temp = num;
   int count=0;
   while(temp>0){
      temp=temp/10;
      count++;
   }
   int sum=0;
   while(num>0){
      int k=num%10;
      sum+=power(k,count);
      num=num/10;
   }
   if(sum==orignal)
     printf("armstrom");
   else 
     printf("not armstrom %d %d \n",orignal,sum);
   return 0;
}