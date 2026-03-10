// 1. Find minimum and maximum number in array.
#include<stdio.h>
int minInArray(int arr[], int size);
int maxInArray(int arr[], int size);
void main()
{
     int x[]={2,4,3,5,34,34,2};
     int size=sizeof(x)/sizeof(int);
     printf("%d\n",minInArray(x,size));
     printf("%d\n", maxInArray(x, size));
}
int minInArray(int arr[], int size)
{
   int min = arr[0];
   for (int i = 1; i < size; i++)
   {
      if (min > arr[i])
         min = arr[i];
   }
   return min;
}
int maxInArray(int arr[], int size)
{
   int max = arr[0];
   for (int i = 1; i < size; i++)
   {
      if (max < arr[i])
         max = arr[i];
   }
   return max;
}