// 8. Print a pattern of stars in diamond shape
// Input: n = 4
// Output:

// *
// **
// ***
// ****
// ***
// **
// *
#include<stdio.h>
void main(){
   int n=8;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
         printf("*");
      }
      printf("\n");
   }
   for(int i=1;i<n;i++){
      for(int j=0;j<n-i;j++){
         printf("*");
      }
      printf("\n");
   }
}