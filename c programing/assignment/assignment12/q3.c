// WAP to Remove the nth Index Character from a Non - Empty String
#include<stdio.h>
void removeChar(char*,int);
void main(){
   char name[15]="firstbit";
   printf("%s\n",name);
   removeChar(name,3);
   printf("%s\n", name);
}
void removeChar(char* st,int index){
   int i=index;
   while (st[i]!='\0')
    {
       st[i]=st[i+1];
       i++;
    }
}