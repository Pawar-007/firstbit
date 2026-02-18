// Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.

#include<stdio.h>
void triangleType(int s1,int s2,int s3){
   if(s1==s2 && s2==s3 && s3==s1){
      printf("triangle is equilateral");
   }
   else if(s1==s2 || s2==s3 || s1==s3){
      printf("triangle is isosceles");
   }
   else if (s1 != s2 || s2 != s3 || s1 != s3)
   {
      printf("triangle is scalene");
   }
}
void main(){
    int s1=10;
    int s2=1;
    int s3=30;
    triangleType(s1,s2,s3);
}