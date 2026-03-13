#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Employee
{
   int empId;
   char name[20];
   int dept;
}Employee;

void store(Employee*);
void display(Employee*);
Employee* storeEmploye(int);
void displayEmploee(Employee*,int);
void main()
{
   Employee e1;
   store(&e1);
   display(&e1);

   Employee *emp = storeEmploye(4);
   displayEmploee(emp,4);
}
void displayEmploee(Employee emp[],int n){
      for(int i=0;i<n;i++){
         printf("Employee details:\nempId=%d\nname=%s\ndept=%d\n", emp[i].empId, emp[i].name, emp[i].dept);
      }
}
Employee* storeEmploye(int noOfEmp){
     Employee* emp=(Employee*)malloc(sizeof(Employee)*noOfEmp);
     printf("Enter employee data one by one\n");
     for (int i = 0; i < noOfEmp; i++)
     {
        scanf("%d%s%d", &emp[i].empId, emp[i].name, &emp[i].dept);
     }
     return emp;
}
void store(Employee* e1){
   printf("Enter user empid name dept\n");
   scanf("%d%s%d",&e1->empId,e1->name,&e1->dept);
}
void display(Employee* e1){
   printf("Employee details:\nempId=%d\nname=%s\ndept=%d",e1->empId,e1->name,e1->dept);
}