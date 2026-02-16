#include<stdio.h>

void main(){
   int x=10;
   for(int i=0;i<x;i++){
      for(int j=0;j<x;j++){
         if(i==0 || i==x-1 || j==0 || j==x-1 || (i==j && i<x/2) || ){
            printf("* ");
         }
         else{
            printf("  ");
         }
      }
      printf("\n");
   }
}