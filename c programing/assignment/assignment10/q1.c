#include<stdio.h>
#include<string.h>
void main(){
   //function 1 strlen(string)
   //it return length of string excluding '\0'
   char st1[]="bhushan";
   printf("strlen() %d \n",strlen(st1));
   
   //function 2 strcpy();
   // The strcpy() function copies a string from the source to the destination.It copies the entire string, including the null terminator.

   char st2[12];
   strcpy(st2,st1);
   printf("strcpy() %s \n",st2);

   // function 3 strncpy()
   // The strncpy() function is similar to strcpy(), but it copies at most n bytes from source to destination string.

   char source[]="firstbit solution";
   char destination[17];
   strncpy(destination,source,14);
   destination[14]='\0';
   printf("strncpy() %s \n", destination);

   // function 4 strcat()
   // The strcat() function is used to concatenate (append) one string to the end of another.

   char st4[30] = "Hello, ";
   char st5[] = "Geeks!";
   strcat(st4,st5);
   printf("strcat() %s\n",st4);

   // function 5 strncat()
   // In C, there is a function strncat() similar to strcat(). This function appends not more than n characters from the string pointed to by source to the end of the string pointed to by destination plus a terminating NULL character

   char st6[30] = "Hello, ";
   char st7[] = "Geeks!";
   strncat(st6,st7,4);
   printf("strncat() %s\n",st6);

   // function 6 strcmp()
   // The strcmp() is a built-in library function in C. This function takes two strings as arguments, compares these two strings lexicographically and returns an integer value as a result of comparison.

   char st8[]="cat";
   char st9[]="cat";
   int x=strcmp(st8,st9);
   printf("strcmp() ");
   if(x==0)
      printf("both string are same \n");
   else if(x<0)
      printf("st8 is lexographicaly less than st9\n");
   else
      printf("st9 is lexographicaly less than st8\n");

   // function 7 strchr()
   // The strchr() function is used to find the first occurrence of a given character in a string. If the character is found, it returns a pointer to the first occurrence of the character; otherwise, it returns NULL.

   
}