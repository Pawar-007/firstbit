// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15
#include<stdio.h>
void sumOfDigit();
void sum(int range);
void main()
{
   sumOfDigit();
   printf("\n");
   int x=15;
   sum(x);
}
void sumOfDigit(){
   int sum=0;
   for(int i=1;i<=10;i++){
      sum=sum+i;
   }
   printf("%d ",sum);
}
void sum(int range){
   int start=1;
   int sum=0;
   while(start<=range){
      sum=sum+start;
      start++;
   }
   printf("%d \n",sum);
}