// Find Sum of first and last digit of given number.Input : n = 12345 Output : 6(1 + 5)
#include<stdio.h>
int sum(int* n1,int* n2){
   return *n1+*n2;
}
void giveFirstAndLast(int* num,int* first,int* last){
   *last=*num%10;
   int temp=*num;
   while(temp>1)temp/=10;
   *first=temp;
}
void main(){
   int num=123;
   int first;
   int last;
   giveFirstAndLast(&num,&first,&last);
   printf("%d ",sum(&first,&last));
}