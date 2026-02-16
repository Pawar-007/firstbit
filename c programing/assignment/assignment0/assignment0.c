// Write a C program to add two integers and display the result
#include <stdio.h>
void main()
{
   // Write a C program to add two integers and display the result
   int a, b;
   a = 15;
   b = 25;
   int sum = a + b;
   printf("the sum of a and b is %d \n", sum);

   // Write a C program to find the area of a circle.
   // Area of circle is pi*r^2;

   float radius = 2;
   float pi = 3.14;
   float area = pi * (radius * radius);
   printf("Area of circle is %f \n", area);

   // Write a C program to convert temperature from Celsius to Fahrenheit using the
   // formula : F = (C * 9 / 5) + 32

   float celsius = 19.5;
   float Fahrenheit = (celsius * 9 / 5) + 32;
   printf("%f'C temperature to Fahrenheit is %f \n", celsius, Fahrenheit);

   // Write a C program to swap two numbers using a temporary third variable.
   int num1 = 10;
   int num2 = 20;
   printf("number before swaping num1 = %d and nums2 = %d \n", num1, num2);
   int temp = num1;
   num1 = num2;
   num2 = temp;
   printf("number after swaping num1 = %d and nums2 = %d \n", num1, num2);

   // Write a C program to input five numbers and find their average.

   float a1, b1, c1, d1, e1;
   printf("enter any 5 digit numbers \n");
   scanf("%f", &a1);
   scanf("%f", &b1);
   scanf("%f", &c1);
   scanf("%f", &d1);
   scanf("%f", &e1);
   float avg = (a1 + b1 + c1 + d1 + e1) / 5;
   printf("Average of five numbers is %f \n", avg);

   // Write a C program to find the square and cube of a given number.
   int x;
   printf("Enter number to calculate sqare and cube\n");
   scanf("%d", &x);
   int squre = x * x;
   int cube = x * x * x;
   printf("square is %d and cube is %d \n", squre, cube);

   // Write a C program to convert given minutes into hours and remaining minutes.

   int min;
   int hour;
   printf("Enter minutes \n");
   scanf("%d", &min);
   hour = min / 60;
   min = min % 60;
   printf("After converting minutes in to hourse %d:%d \n", hour, min);

   // Write a C program to input the length and width of a rectangle and find its perimeter.

   int length, width;
   printf("Enter the length and width \n");
   scanf("%d", &length);
   scanf("%d", &width);
   int perimeter = 2 * (length + width);
   printf("perimeter of rectangle having length %d and width %d is %d \n", length, width, perimeter);

   // Write a C program to input the base and height of a triangle and calculate its area.
   int height, base;
   printf("Enter the height and base \n");
   scanf("%d", &height);
   scanf("%d", &base);
   int areaTriangle = (height * base) / 2;
   printf("Area of triangle is %d \n", areaTriangle);

   // Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.

   float m1, m2, m3, m4, m5;
   printf("enter marks from total 100 \n");
   scanf("%f", &m1);
   scanf("%f", &m2);
   scanf("%f", &m3);
   scanf("%f", &m4);
   scanf("%f", &m5);
   float percentage = ((m1 + m2 + m3 + m4 + m5) / 500) * 100;
   printf("total percentage optain in 5 subject %f \n", percentage);
}