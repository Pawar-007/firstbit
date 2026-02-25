// 5. Print alternate elements in array.
#include<stdio.h>
void printAlternate(int arr[],int size){
   for(int i=0;i<size;i++){
     if(i%2==0){
      printf("%d ",arr[i]);
     }
   }
}
void main(){
    int arr[]={4,3,5,2,62,54,5};
    int size=sizeof(arr)/sizeof(int);
    printf("alternate element ");
    printAlternate(arr,size);
;}