// WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
void main(){
   char word[50] = "education is the key of success";
   if(word[0]=='\0'){
      printf("length 0");
      return;
   }
   int count=1;
   for(int i=1;word[i]!='\0';i++){
      if(word[i]==' '){
         count++;
      }
   }
   printf("words present int string %d\n",count);
}