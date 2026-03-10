#include<stdio.h>
#include<string.h>
struct student
{
   int roll_no;
   char name[20];
};
void main(){
   struct student s1;
   struct student s2;
   
   s1.roll_no=24;
   strcpy(s1.name,"bhushan");
   printf("%d %s \n",s1.roll_no,s1.name);

   printf("Enter student roll_no and name\n");
   scanf("%d %s",&s2.roll_no,s2.name);
   printf("%d %s \n", s2.roll_no, s2.name);
   printf("%c",s2.name);
}
