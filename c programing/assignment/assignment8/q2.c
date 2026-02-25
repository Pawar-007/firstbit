// 2. Search the given number in array.
#include<stdio.h>
int searchElement(int num[],int size,int key){
    int index=-1;
    for(int i=0;i<size;i++){
       if(num[i]==key){
         index=i;
         break;
       }
    }

    return index;
}
void main(){
   int arr1[5] = {2,5,7,9,11};
   int arr2[5] = {1, 3, 5, 7, 9};
   int arr3[5] = {9, 2, 15, 4, 7};
   int arr[5] = {12, 5, 8, 1, 20};

   printf("%d\n", searchElement(arr1, 5, 7));
   printf("%d\n",searchElement(arr2,5,7));
   printf("%d\n", searchElement(arr, 5, 7));
   printf("%d\n", searchElement(arr3, 5, 7));
}