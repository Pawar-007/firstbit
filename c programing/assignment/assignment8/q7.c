#include<stdio.h>
void elementWiseSum(int arr1[],int arr2[],int sum[],int size);
void printArray(int arr[],int n);
void main()
{
   int arr1[] = {1, 2, 3};
   int arr2[] = {4, 5, 6};
   int n = 3;
   int sum[n];
   elementWiseSum(arr1,arr2,sum,n);
   printArray(sum,n);

}
void printArray(int arr[],int n){
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
   }
}
void elementWiseSum(int arr1[],int arr2[],int sum[],int size){
    for(int i=0;i<size;i++){
      sum[i]=arr1[i]+arr2[i];
    }
   
}