// 5. Write a menu driven program to take a number for user and perform operations as follows.

// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

#include <stdio.h>
void main()
{
   int task;
   printf("select the task to perform \n");
   printf("1.To check number is even or odd.  \n");
   printf("2.To check number is prime or not. \n");
   printf("3.To check number is pallindrome or not.\n");
   printf("4.To check number is positive, negative or zero. \n");
   printf("5.To reverse a number. \n");
   printf("6.To find sum of digits. \n");
   scanf("%d", &task);

   int number;
   printf("Enter an number\n");
   scanf("%d", &number);
   switch (task)
   {
   case 1:
   { // To check number is even or odd.
      (number % 2 == 0) ? printf("%d is even \n", number) : printf("%d is not even \n", number);
      break;
   }

   case 2:
   { // To check number is prime or not.
      if (number <= 1)
      {
         printf("Number is not prime\n");
         break;
      }
      for (int i = 2; i * i <= number; i++)
      {
         if (number % i == 0)
         {
            printf("given number is not prime\n");
            return;
         }
      }
      printf("%d number is prime\n", number);
      break;
   }

   case 3:
   { // To check number is pallindrome or not.
      int temp1 = number, rev1 = 0;
      while (temp1 > 0)
      {
         rev1 = rev1 * 10 + temp1 % 10;
         temp1 = temp1 / 10;
      }
      (rev1 == number) ? printf("%d is palidrom\n", number) : printf("%d is notpalidrom\n", number);
      break;
   }
   case 4:
   { // 4.To check number is positive, negative or zero.
      if (number > 0)
         printf("number is positive\n");
      else if (number < 0)
         printf("number is negative\n");
      else
         printf("number is zero\n");
      break;
   }
   case 5:
   { // To reverse a number
      int rev2 = 0, temp2 = number;
      while (temp2 > 0)
      {
         rev2 = rev2 * 10 + temp2 % 10;
         temp2 = temp2 / 10;
      }
      printf("reverse of %d is %d\n", number, rev2);
      break;
   }
   case 6:
   { // To find sum of digits.
      int sum = 0, temp3 = number;
      while (temp3 > 0)
      {
         sum = sum + temp3 % 10;
         temp3 = temp3 / 10;
      }
      printf("sum of number is %d \n", sum);
      break;
   }
   default:
   {
      printf("task not in menu \n");
      break;
   }
   }
}