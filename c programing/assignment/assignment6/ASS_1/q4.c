// 4. Write a program to check whether a given character is a vowel or consonant.
#include<stdio.h>
void checkVowelOrConsonant(char c);
void main(){
    char x='r';
    checkVowelOrConsonant(x);
}
void checkVowelOrConsonant(char c){
   if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c=='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
   {
      printf("%c is a vowel \n", c);
   }
   else{
      printf("%c is a consonant \n", c);
   }
}