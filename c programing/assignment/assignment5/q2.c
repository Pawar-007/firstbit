// Print a right - angled triangle patter
// Input : n = 5 Output : 
// *
// **
// ***
// ****
// *****

#include<stdio.h>
void main(){
   int n=5;
   for(int i=0;i<5;i++){
      for(int j=0;j<=i;j++){
         printf("* ");
      }
      printf("\n");
   }
}