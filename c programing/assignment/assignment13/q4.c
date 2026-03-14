// Find odd and even among the numbers.
#include<stdio.h>
#include<stdlib.h>
int* odd(int [],int);
int* even(int[], int);
void main(){
   int arr[]={2,3,5,23,4,5,45,2,23};
   int size=sizeof(arr)/sizeof(int);
   int* oddValues=odd(arr,size);
   for (int i = 0; i < size; i++)
   {
      if (oddValues[i] != 0)
         printf("%d ", oddValues[i]);
   }
}
int* odd(int arr[],int size){
   int* temp=(int*)malloc(size*sizeof(int));
   int x=0; 
   for(int i=0;i<size;i++){
      if(arr[i]%2!=0){
         temp[x]=arr[i];
         x++;
      }
   }
   while (x<=size){
        temp[x++]=0;
   }
   
   return temp;
}
int *even(int arr[], int size)
{
   int *temp = (int *)malloc(size * sizeof(int));
   int x = 0;
   for (int i = 0; i < size; i++)
   {
      if (arr[i] % 2 == 0)
      {
         temp[x] = arr[i];
         x++;
      }
   }
   while (x < size)
   {
      temp[x++] = 0;
   }

   return temp;
}