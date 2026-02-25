// Accept array and print only prime numbers of array.
#include<stdio.h>
int isPrime(int num);
void printPrime(int arr[],int size);
void main(){
   int arr[]={2,3,5,7,11,23,33,56};
   int size=sizeof(arr)/sizeof(arr[0]);
   printPrime(arr,size);
}
int isPrime(int num)
{
   for (int i = 2; i * i < num; i++)
   {
      if (num % i == 0)
      {
         return 0;
      }
   }
   return 1;
}
void printPrime(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      if (isPrime(arr[i]))
      {
         printf("%d ", arr[i]);
      }
   }
}