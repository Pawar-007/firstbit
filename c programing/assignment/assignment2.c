#include<stdio.h>

void main(){
   // Accept two numbers from user and an operator(+, -, /, *, %) based on that perform the desired operations.

   int num1=121;
   int num2=20;
   char operator='/';
   
   if(operator=='+'){
      printf("Addition of 2 numbers %d + %d = %d \n",num1,num2,num1+num2);
   }
   else if(operator=='-'){
      printf("Subtraction of 2 numbers %d - %d = %d \n", num1, num2, num1 - num2);
   }
   else if (operator == '/')
   {
      printf("Division of 2 numbers %d / %d = %d \n", num1, num2, num1 / num2);
   }
   else if (operator == '*')
   {
      printf("Product of 2 numbers %d * %d = %d \n", num1, num2, num1 * num2);
   }
   else if (operator == '%')
   {
      printf("mod of 2 numbers %d mod %d = %d \n", num1, num2, num1 % num2);
   }
   else{
      printf("select an operator");
   }

   // Accept three sides of a triangle from the user and determine whether the triangle is equilateral,isosceles, or scalene.

   // equilateral=All sides are equal
   // isosceles=Exactely two sides are equal
   // scalene=All sides are different

   int side1=12;
   int side2=12;
   int side3=34;

   if(side1==side2 && side2==side3){
      printf("Given triangle is equilateral triangle \n");
   }
   else if(side1==side2 || side2==side3 || side1==side3){
      printf("given triangle is isosceles triangle \n");
   }
   else if (side1 != side2 && side2 != side3 && side1 != side3)
   {
      printf("given triangle is scalene triangle\n");
   }

   // Write a program to find greatest of three numbers using nested if-else.
   int n1=12;
   int n2=39;
   int n3=344;
   if(n1>n2){
      if(n1>n3){
         printf("%d is gretest of all\n",n1);
      }
      else{
         printf("%d is gretest of all\n ",n3);
      }
   }
   else {
      if(n2>n3){
         printf("%d is gretest of all\n", n2);
      }
      else{
         printf("%d is gretest of all\n", n3);
      }
   }

   // 4. Ask the user to enter marks.Then show the result based on these rules :
   // If marks are more than 75 → show "Distinction" 
   // If marks are more than 65 → show "First Class" 
   // If marks are more than 55 → show "Second Class" 
   // If marks are 40 or more → show "Pass Class" 
   // If marks are less than 40 → show "Fail"

   int marks=55;
   if(marks>75){
      printf("Distinction\n");
   }
   else if(marks>65){
      printf("First Class\n");
   }
   else if(marks>55){
      printf("Second Class\n");
   }
   else if(marks>=40){
      printf("pass class\n");
   }
   else{
      printf("fail\n");
   }

   // Accept the price from user.Ask the user if he is a student(user may say y or n).If he is a student and he has purchased more than 500 than discount is 20 % otherwise discount is 10 %.But if he is not a student then if he has purchased more than 600 discount is 15 % otherwise there is not discount.

   int price=50;
   char std='n';
   if(std=='y'){
      if(price>500){
        printf("you got discount of 20% \n");
      }
      else{
         printf("you got discount of 10% \n");
      }
   }
   else{
      if (price > 600){
         printf("you got discount of 15% \n");
      }
      else{
         printf("you dont have discount \n");
      }
   }

   //    Accept a number and check if it is divisible by 3, 5, or both.
   // (Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
   // both" or” Divisible by None”)
   
   int num=25;
   if(num%3==0){
      if(num%5==0){
         printf("Divisible by both\n");
      }
      else{
         printf("Divisible by 3 but not by 5\n");
      }
   }
   else{
      if (num % 5 == 0){
         printf("Divisible by 5 but not by 3\n");
      }
      else{
         printf("Divisible by None\n");
      }
   }

   // Accept the age and check if the person is : Child(age < 12), Teenager(12–19), Adult(20–59), Senior(60 and above)
   int age=10;
   if(age<12){
      printf("child");
   }
   else if(age>=12 && age<=19){
      printf("child");
   }
   else if (age >= 20 && age <= 59){
      printf("Adult");
   }
   else{
      printf("Senior");
   }
}