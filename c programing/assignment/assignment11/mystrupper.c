//mystrupper
// convert string to upper case;
#include<stdio.h>
void mystrupper(char[]);
void main(){
     char ch[]="wefkNOF";
     mystrupper(ch);
     printf("%s ",ch);
}
void mystrupper(char ch []){
    int i=0;
    while(ch[i]!='\0'){
      if(ch[i]>='a' && ch[i]<='z'){
         ch[i]-=32;
      }
      i++;
    }
}