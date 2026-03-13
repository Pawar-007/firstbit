// SalesManager(id, name, salary, incentive, target)
#include<stdio.h>
typedef struct SalesManager
{
   int id;
   char name[20];
   int salary;
   int incentive;
   int target;
}Sales;
void store(Sales*);
void display(Sales*);
void main(){
     Sales s1;
     store(&s1);
     display(&s1);
     
}
void store(Sales* s1){
   printf("Ennter sales manager details id name salary incentive target\n");
   scanf("%d%s%d%d%d",&s1->id,s1->name,&s1->salary,&s1->incentive,&s1->target);
}
void display(Sales* s1){
     printf("details of salesmanager:\nid=%d\nname=%s\nsalary=%d\nincentive=%d\ntarget=%d\n",s1->id,s1->name,s1->salary,s1->incentive,s1->target);
}