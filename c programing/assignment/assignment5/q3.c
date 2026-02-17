// Print an inverted right-angled triangle pattern
// Input: n = 5
// Output:

// *****
// ****
// ***
// **
// *
#include<stdio.h>
void main(){
   int n=5;
   for(int i=0;i<n;i++){
      for(int j=n-i;j>0;j--){
         printf("* ");
      }
      printf("\n");
   }
}