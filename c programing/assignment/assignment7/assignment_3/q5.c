// Find factorial of given number.Input : n = 5 Output : 120
#include<stdio.h>
void changeToFactorial(int* num){
   int temp=*num-1;
   while(temp>0){
      *num*=temp;
      temp--;
   }
}
void main(){
   int num=5;
   changeToFactorial(&num);
   printf("digit converted to factorial %d",num);
}