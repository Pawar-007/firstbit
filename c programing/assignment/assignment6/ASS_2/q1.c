// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
// desired operations.
#include<stdio.h>
int operation(int op1,int op2,char operator){
   if(operator=='+')return op1+op2;
   else if(operator=='-')return op1-op2;
   else if(operator=='*')return op1*op2;
   else if(operator=='/')return op1/op2;
   else if(operator=='%') return op1%op2;
   else{
      printf("invalid operator");
      return 0;
   }
}
void main(){
   int result=operation(23,20,'+');
   printf("%d is result",result);
}