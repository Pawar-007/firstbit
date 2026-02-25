// Find sum of all numbers.
#include<stdio.h>

int sumOfAllNumbers(int num[],int size){
      int sum=0;
      for(int i=0;i<size;i++){
         sum+=num[i];
      }
      return sum;
}
void main(){
   int arr[]={2,2,2,2,2};
   int size=sizeof(arr)/sizeof(int);
   printf("%d",sumOfAllNumbers(arr,size));
}