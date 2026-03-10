#include<stdio.h>
void toUpperCase(char* str){
      while(*str){
         if(*str>='a' && *str<='z'){
            *str = *str - 32;
         }
         str++;
      }
}
void toLowerCase(char *str)
{
   while (*str)
   {
      if (*str >= 'A' && *str <= 'Z')
      {
         *str = *str + 32;
      }
      str++;
   }
}
int mySprcmp(char*st1,char*st2,int size1,int size2){
   if(size1!=size2)return 0;
   while(*st1!='\0' && *st2!='\0'){
      if (*st1!=*st2)
      {
         return 0;
      }
      st1++;
      st2++;
   }
   return 1;
}
void main(){
   char st[]="opop";
   char st1[] = "opo";
   int x = mySprcmp(st, st1,sizeof(st),sizeof(st1));
   if (x == 1)
         printf("same");
      else
         printf("not same");

}