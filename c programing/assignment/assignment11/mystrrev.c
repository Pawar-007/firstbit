//mystrrev
//this function reverse while 
#include<stdio.h>
#include<string.h>
void mystrrev(char[]);
void main(){

   char *ch = "firstbit";
   *(ch + 2) = 'p';
   printf("%c", *(ch+2));
}
void mystrrev(char ch[]){
   int i=0;
   int j=strlen(ch)-1;
   while(i<j){
      char temp=ch[i];
      ch[i]=ch[j];
      ch[j]=temp;
      i++;j--;
   }
}