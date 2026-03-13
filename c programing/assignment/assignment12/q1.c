// Write a program to scan string from user then scan a single character and search it
// in a accepted string.
#include<stdio.h>
void main(){
   char ch[20];
   printf("enter a word\n");
   fgets(ch, 20, stdin);
   printf("%s",ch);
   printf("Enter a char to search ");
   char temp;
   int index=-1;
   scanf("%c",&temp);
   for(int i=0;ch[i]!='\0';i++){
      if(ch[i]==temp){
         index=i;
         break;
      }
   }
   if(index!=-1)printf("char present at index %d\n",index);
}