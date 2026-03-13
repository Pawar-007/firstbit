// WAP to Take in Two Strings and Display the Larger String without Using Built - in Functions
#include <stdio.h>
void main()
{
   char word1[50] = "education is the key of sucess";
   char word2[50] = "education is the";
   int i=0;
   while(word1[i]!='\0' || word2[i]!='\0'){
      if(word1[i]=='\0' && word2[i]!='\0'){
         printf("word2 is greater");
         return;
      }
      else if (word2[i] == '\0' && word1[i] != '\0'){
         printf("word1 is greater");
         return;
      }
      i++;
   }
   printf("both are same");
}