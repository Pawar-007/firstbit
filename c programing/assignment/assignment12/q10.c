// Write a program to check the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int isPalidrom(char[]);
void main(){
    char name[] = "madam";
    if(isPalidrom(name))printf("word is palidrom");
    else printf("it is not plidrom");
}
int isPalidrom(char word[]){
   int i=0,j=strlen(word)-1;
   while(i<j){
      if(word[i]!=word[j])return 0;
      i++;
      j--;
   }
   return 1;
}