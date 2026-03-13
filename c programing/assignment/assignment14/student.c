// Student (rollNo, name, marks)
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
typedef struct student
{
   int rollno;
   char name[20];
   int marks;
}student;
void store(student*);
void display(student*);
void showDetail(student);
void displayStudents(student[], int);
student *storeData(int, char[], int);
void main(){
   student st;
   student stud[5];
   
   stud[0] = *storeData(10, "bhushan", 40);
   stud[1] = *storeData(10, "bhushan", 40);
   stud[2] = *storeData(10, "bhushan", 40);
   stud[3] = *storeData(10, "bhushan", 40);

   //pass by array;

   displayStudents(stud,4);
   
   //pass by address
   store(&st);
   display(&st);

   student* s1=storeData(10,"bhushan",40);
   //pass by value
   showDetail(*s1);
}
void store(student* s1){
   printf("Enter student rollno,name,marks");
   scanf("%d%s%d", &(*s1).rollno, (*s1).name, &(*s1).marks);
   return;
}


void display(student* s1){
   printf("student detail \nrollno=%d\nname=%s\nmarks=%d", (*s1).rollno, (*s1).name, (*s1).marks);
}

void displayStudents(student st[],int size){
      for(int i=0;i<size;i++){
         printf("student %d) %d %s %d\n",i,st[0].rollno,st[0].name,st[0].marks);
      }
}
student* storeData(int roll, char name[], int marks){
   printf("Enter student detail rollno name marks ");
   student* s1=(student*)malloc(sizeof(student));
   (*s1).rollno=roll;
   strcpy((*s1).name,name);
   (*s1).marks=marks;
   return s1;
}

void showDetail(student s1){
   printf("student detail \nrollno=%d\nname=%s\nmarks=%d", s1.rollno, s1.name, s1.marks);
}