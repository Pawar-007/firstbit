// Write a program to check whether a number is even or odd.
#include<stdio.h>
int isEven(int x){
   if(x%2==0) return 1;
   return 0;
}


void main(){
   int n=3;
   isEven(n) == 1 ? printf("even "):printf("odd");
}