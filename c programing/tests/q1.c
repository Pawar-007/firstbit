// 1. Write a program to count number of words in a string.
#include<stdio.h>
int countWords(char[]);
void main(){
     char str[]="hello word i am student of firstbit";
     int count=countWords(str);
     printf("words present in string = %d\n",count);
}
int countWords(char str[]){
   int len=0;
   while(str[len]!='\0'){
      len++;
   }

   if (len == 0)
   {
      printf("String is empty");
      return 0;
   }

   int start=0;
   int end=len-1;
   while(str[start]==' ')start++;
   while(str[end]==' ')end--;

   int count=0;
   
   for(int i=start;i<end;i++){
      if(str[i]==' '){
         count++;
      }
   }
   count++;
   return count;
}