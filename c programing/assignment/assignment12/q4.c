// WAP to Form a New String where the First Character and the Last Character have
//been Exchanged
#include<stdio.h>
#include<string.h>
void main(){
   char ch[10]="firstbit";
   char newch[10];
   strcpy(newch,ch);
   //int last = 0;
   // while(newch[last]!='\0')last++;
   // char temp=newch[0];
   // newch[0]=newch[last-1];
   // newch[last-1]=temp;
   
   int last=strlen(ch)-1;
   char temp=newch[0];
   newch[0]=newch[last];
   newch[last]=temp;
   printf("old st %s\n",ch);
   printf("new st %s",newch);
}