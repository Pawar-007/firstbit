// WAP to Count the Number of Vowels in a String
#include<stdio.h>
#include<string.h>
int isVowel(char);
void main(){
    char word[40] = "education";
    int count=0;
    for(int i=0;i<strlen(word);i++){
      if(isVowel(word[i]))count++;
    }
    printf("totel vowels present in string %d\n",count);
    
} 
int isVowel(char c)
{
   if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
   {
      return 1;
   }
   return 0;
}