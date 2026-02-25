// 4. Find odd and even among the numbers.
#include<stdio.h>
void oddNumber(int arr[],int size){
   for(int i=0;i<size;i++){
      if(arr[i]%2!=0){
         printf("%d ",arr[i]);
      }
   }
}
void evenNumber(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      if (arr[i] % 2 == 0)
      {
         printf("%d ", arr[i]);
      }
   }
}
void main(){
    int arr[]={3,2,5,2,1,1,3,5,5,6,4,9,10};
    int size=sizeof(arr)/sizeof(int);
    printf("odd numbers ");
    oddNumber(arr,size);
    printf("\neven number ");
    evenNumber(arr,size);

}