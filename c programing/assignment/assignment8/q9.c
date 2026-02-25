// Reverse the given array.
#include<stdio.h>
void reverse(int arr[],int size);
void main(){
      int arr[]={1,2,3,4,5,6,7,9};
      int size=sizeof(arr)/sizeof(arr[0]);
      reverse(arr,size);
      for(int i=0;i<size;i++){
         printf("%d ",arr[i]);
      }
}
void reverse(int arr[],int size){
      int i=0;
      while(i<(size/2)){
         int temp=arr[i];
         arr[i]=arr[size-i-1];
         arr[size-i-1]=temp;
         i++;
      }
}