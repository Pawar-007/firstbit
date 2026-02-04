#include <stdio.h>

int main(){

   //even,odd
   int x=11;
   if(x%2==0){
      printf("even\n");
   }
   else{
      printf("odd\n");

   }
    
   //positive,negative
   int num=-1;
   if(num<0){
      printf("negative\n");
   }
   else{
      printf("positive\n");
   }
   
   //leap year or not

   int year=1900;
   if(year%4==0 && year%100!=0 || year%400==0){
      printf("leap year\n");
   }
   else{
      printf("not a leap year\n");
   }


   return 0;
}