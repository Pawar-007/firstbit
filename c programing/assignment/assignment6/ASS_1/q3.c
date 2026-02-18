// Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>
#include<conio.h>
void checkCase(char x){
   if(x>='A' && x<='Z'){
      printf("%c is uppercase",x);
   }
   else if (x >= 'a' && x <= 'z'){
      printf("%c is lowercase", x);
   }
}
void main(){
   char ch = 'A';
   checkCase(ch);
}