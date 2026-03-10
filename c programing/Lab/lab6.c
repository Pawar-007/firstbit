#include<stdio.h>
int gcd(int num1,int num2);
void main(){
    int n1=56;
    int n2=16;
    printf("%d",gcd(n1,n2));
}
int gcd(int no1,int no2){
   if(no1%no2==0)
      return no2;
   gcd(no2,no1%no2);
}