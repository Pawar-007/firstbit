#include <stdio.h>
#include <stdlib.h>
int *elementWiseSum(int arr1[], int arr2[], int size);
void printArray(int arr[], int n);
void main()
{
   int arr1[] = {1, 2, 3};
   int arr2[] = {4, 5, 6};
   int n = 3;
   int *sum = elementWiseSum(arr1, arr2, n);
   printArray(sum, n);
}
void printArray(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
}
int *elementWiseSum(int arr1[], int arr2[], int size)
{
   int *sum = (int *)malloc(sizeof(int) * size);
   for (int i = 0; i < size; i++)
   {
      sum[i] = arr1[i] + arr2[i];
   }
   return sum;
}