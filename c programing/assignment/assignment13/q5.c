// Print alternate elements in array.
#include<stdio.h>
#include<stdlib.h>
int* altNum(int[],int);
void main(){
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int size=sizeof(arr)/sizeof(int);
   int* alternateNum=altNum(arr,size);
   for(int i=0;i<size/2;i++){
      printf("%d ",alternateNum[i]);
   }
    
}
int* altNum(int arr[],int size){
   int* alt=(int*)malloc((size*sizeof(int))/2);
   int x=0;
   for(int i=0;i<size;i+=2){
      alt[x++]=arr[i];
   }
   return alt;
}