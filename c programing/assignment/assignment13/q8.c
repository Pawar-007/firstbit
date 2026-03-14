// 8. Merge two arrays
#include<stdio.h>
#include<stdlib.h>
int* mergeArray(int[],int[],int,int);
void main(){
     int arr1[10]={1,2,3,4,5,6,7,8,9,10};
     int arr2[10] = {11,12,13,14,15,16,17,18,19,20};
     int* merge=mergeArray(arr1,arr2,10,10);
     for(int i=0;i<20;i++){
      printf("%d ",merge[i]);
     }
}
int* mergeArray(int arr1[],int arr2[],int size1,int size2){
   int* merge=(int*)malloc((size1+size2)*sizeof(int));
   int x=0;
   for(int i=0;i<size1;i++){
      merge[x++]=arr1[i];
   }
   for (int i = 0; i < size2; i++)
   {
      merge[x++] = arr2[i];
   }
   return merge;
}