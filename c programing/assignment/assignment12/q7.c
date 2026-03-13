// WAP to Remove the Characters of Odd Index Values in a String
#include <stdio.h>

void main()
{
   char word[50] = "education is the key of success";
   int even=0;
   int put=0;
   while(word[even]!='\0'){
      word[put]=word[even];
      put=put+1;
      even=even+2;
   }
   word[put]='\0';
   printf("%s\n", word);
}