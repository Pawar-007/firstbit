#include<stdio.h>
void mystrcpy(char[],char[]);
void main(){
    char st1[]="bhushan";
    char st2[40]="";
    mystrcpy(st2,st1);
    printf("string 1=%s %d\nstring 2=%s %d",st1,st1,st2,st2);
}
void mystrcpy(char str1[],char str2[]){
   int i=0;
    while(str2[i]!='\0'){
       str1[i]=str2[i];
       i++;
    }
}