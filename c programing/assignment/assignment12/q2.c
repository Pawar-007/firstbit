// WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>
void main(){
    char ch[30] = "java is a programing language";
    int i=0;
    while(ch[i]!='\0'){
      if(ch[i]=='a'){
         ch[i]='$';
      }
      i++;
    }
    printf("%s",ch);
}