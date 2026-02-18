// Accept a number and check if it is divisible by 3, 5, or both.
// (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
// both" or” Divisible by None”)
#include<stdio.h>
void divisibleBy3Or5(int num){
   if(num%3==0 && num%5==0){
      printf("%d is divisible by 3 and 5",num);
   }
   else if(num%3==0){
      printf("%d is divisible by 3 but not by 5", num);
   }
   else if(num%5==0){
      printf("%d is divisible by 5 but not by 3", num);
   }
   else{
      printf("%d is not divisible by 3 and 5",num);
   }
}
void main(){
   int num=7;
   divisibleBy3Or5(num);
}