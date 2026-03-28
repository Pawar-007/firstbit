// 2. Write a program to print following series : 1 + 11 + 111 + 1111 + .....+ n times 1
#include<stdio.h>
void printSeries(int);
void main(){
    int n=10;
    printSeries(n);
}
void printSeries(int n){
   n++;
   char ch[n];
   for(int i=0;i<n;i++){
      ch[i]='\0';
   }
   ch[0]='1';
   for(int i=1;i<n;i++){
      printf("%s",ch);
      ch[i]='1';
      if(i<n-1){
         printf(" + ");
      }
   }
}