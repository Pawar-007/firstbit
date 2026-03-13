#include<stdio.h>
int mystrlen(char []);
void main(){
    char str[]="bhushan";
    printf("%d",mystrlen(str));
}
int mystrlen(char str[]){
   int len=0;
   while(str[len]!='\0'){
      len++;
   }
   return len;
}
