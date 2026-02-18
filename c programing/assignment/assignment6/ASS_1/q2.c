// 2. Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>
int isPalidromOrNot(int num){
   int temp=num;
   int num1=0;
   int org=num;
   while(temp>0){
      num1=num1*10+temp%10;
      temp=temp/10;
   }
   
   printf("%d \n", num1);
   if(num1==num) return 1;

   return 0;
}
void main(){
   int num=22522;
   printf("%d \n",isPalidromOrNot(num));
}