// 9 Check the given number is Palindrome number or not.Input : n = 121 Output : Palindrome
// A palindrome number is an integer that reads the same backward as forward
#include<stdio.h>
void main(){
   int num=1000;
   int org=num;
   int pal=0;
   while (num>0)
   {
      int x=num%10;
      pal=pal*10+x;
      num/=10;
   }
   
   if(org==pal)printf("%d is palidrom ",org);
   else printf("%d is not palidrom ",org);
}
