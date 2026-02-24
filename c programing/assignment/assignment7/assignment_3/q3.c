// Check the given number is Palindrome number or not.Input : n = 121 Output : Palindrome
#include<stdio.h>
int isPalidrom(int* num){
     int temp=*num;
     int reverse=0;
     while(temp>0){
        reverse=reverse*10+(temp%10);
        temp/=10;
     }
     return reverse==*num;
}
void main(){
    int num=121;
    isPalidrom(&num)?printf("given number is palidrom"):printf("not palidrom");
}