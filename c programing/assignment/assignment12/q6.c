// WAP to Take in a String and Replace Every Blank Space with special symbol.
#include <stdio.h>
#include <string.h>

void main()
{
   char word[50] = "education is the key of success";
   for (int i = 0; word[i]!='\0'; i++)
   {
      if (word[i]==' '){
         word[i]='@';
      }
   }
   printf("totel vowels present in string %s\n", word);
}