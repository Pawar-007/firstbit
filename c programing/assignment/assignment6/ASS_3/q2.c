// Print table for given number.
// Input: n = 5
// Output: 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>
void printTable(int);
int print_Table(int);
void main(){
     int x=12;
     printTable(x);
     printf("\n");
     printf("\nreturn value %d",print_Table(x));
}
void printTable(int num){
   int i=1;
   while(i<=10){
      printf("%d ",num*i);
      i++;
   }
}
int print_Table(int x){
   int i=1;
   while(i<=10){
      printf("%d ",x*i);
      i++;
   }
   return 1;
}