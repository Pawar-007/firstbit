// Find Sum of first and last digit of given number.Input : n = 12345 Output : 6(1 + 5)
#include<stdio.h>
void main(){
   int num=2;
   int temp=num;
   
   int last=num%10;
   while(temp>9)temp=temp/10;
   int sum=temp+last;
   printf("sum of first and last number %d",sum);
}