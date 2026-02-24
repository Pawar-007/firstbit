#include<stdio.h>

void main(){
   int x=23;
   int* y=&x;

   int arr[5];
   printf("Address of y %d \n", sizeof(arr));
   printf("Enter values in Array\n");
   for(int i=0;i<sizeof(arr)/sizeof(int);i++){
      printf("Enter %d st ",i+1);
      scanf("%d",&arr[i]);

   }
   for(int i=0;i<sizeof(arr)/sizeof(int);i++){
      printf("%d ",arr[i]);
   }
}