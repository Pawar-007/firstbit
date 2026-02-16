#include<stdio.h>

int main(){

   // Write a program to check whether a number is even or odd.
   int num=22;
   if(num%2==0){
      printf("%d is even number\n",num);
   }
   else{
      printf("%d is odd number\n", num);
   }

   // Write a program to check whether a given year is a leap year.

   int year = 1900;
   if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
   {
      printf("leap year\n");
   }
   else
   {
      printf("not a leap year\n");
   }

   //  Write a program to check given 3 digit number is pallindrome or not.
   int num1=121;
   int ref=num1;
   int ans=num1%10;
   num1=num1/10;
   ans=ans*10+num1%10;
   num1 = num1 / 10;
   ans = ans*10 + num1 % 10;
   if(ref==ans){
      printf("%d is palidrom number \n",ans);
   }
   else{
      printf("%d is not a palidrom number \n", ref);
   }

   // Write a program to check whether a given character is a vowel or consonant.
   
   char c='B';
   if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
   {
      printf("%c is a vowel \n",c);
   }
   else{
      printf("%c is a consonant \n",c);
   }

   // Write a program to check whether a person is eligible to vote (age ≥ 18).

   int age=12;
   if(age>=18 && age<120){
      printf("%d age is eligable for vote \n",age);
   }
   else{
      printf("%d age is not eligable for vote \n",age);
   }

   // Write a program to check whether a given character is uppercase or lowercase.
   char character='Z';
   if (character >= 65 && character <= 90)
   {
      printf("%c is a Uppercase \n", character);
   }
   else if (character >= 97 && character <= 122){
      printf("%c is a lowercase \n", character);
   }

   //Calculating total salary based on basic.If basic <= 5000 da, ta and hra will be 10 %, 20 % and 25 % respectively otherwise da, ta and hra will be 15 %, 25 % and 30 % respectively.
   // DA → Dearness Allowance
   // TA → Travel Allowance
   // HRA → House Rent Allowance

   float sal=4000;
   
   float da,ta,hra;

   if(sal<=5000){
      da=0.1*sal;
      ta =0.2*sal;
      hra =0.25*sal;
   }
   else{
      da = 0.15* sal;
      ta = 0.25 * sal;
      hra = 0.30 * sal;
   }
   
   printf("total salory is %f \n",(sal+da+ta+hra));
    return 0;
}