// Print table for given number.
// Input: n = 5
// Output: 5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
void printTable(int* num){
   for(int i=1;i<=10;i++){
      printf("%d ",*num*i);
   }
}
void main(){
   int num=5;
   int* x=&num;
   printTable(&num);
   int arr[9];
   printf("\n%d ",arr[2]);
}