// Print numbers from 1 to 10 Output : 1 2 3 4 5 6 7 8 9 10
#include<stdio.h>
void printNoInRange(int);
void main(){
   int x=10;
   printNoInRange(x);
}
void printNoInRange(int x){
   int i=1;
   while(i<=x){
      printf("%d ",i++);
   }
}