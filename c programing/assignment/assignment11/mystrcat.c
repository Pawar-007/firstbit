// mystrcat
// The strcat() function is used to concatenate (append) one string to the end of another
#include<stdio.h>
#include<string.h>
void mystrcat(char [],char []);
void main(){
     char ch1[20]="bhushan";
     mystrcat(ch1,"pawar");
     printf("%s", ch1);
}
void mystrcat(char ch1[],char ch2[]){
   int i=0;
   while(ch1[i]!='\0'){
      i++;
   }
   int j=0;
   while (ch2[j] != '\0')
   {
      ch1[i++]=ch2[j++];
   }
   ch1[i]='\0';
}