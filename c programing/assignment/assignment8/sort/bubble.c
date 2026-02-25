// Sort the array.
#include<stdio.h>
void sort(int arr[],int size);
void main()
{
   int arr[]={5634,2,5,45,34,23,544,3,8,95,45};
   int size = sizeof(arr) / sizeof(arr[0]);
   sort(arr,size);
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
}
void sort(int arr[],int size){
   for(int i=size-1;i>=0;i--){
      for(int j=0;j<size-1;j++){
         if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
}