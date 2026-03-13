#include<stdio.h>
#include<string.h>
typedef struct student
{
   int roll_no;
   char name[40];
   int phone_no;
}student;

void enterData(student*,int);
void enterDataHc(student *);
// void display(student [],int);
int searchstudent(student*,int,int);
void main(){
     student st[4];
     int len=sizeof(st)/sizeof(student);
     enterDataHc(st);

     //   for(int i=0;i<len;i++){
     //      printf("%d) %d %s %d\n",i+1, st[i].roll_no, st[i].name, st[i].phone_no);
     //   }

     int roll_no;
     printf("Enter the roll no of student");
     scanf("%d",&roll_no);
     int index=searchstudent(st,len,roll_no);
     if(index!=-1){
        printf("student detail \nroll_no=%d \nname=%s \nphone_no=%d\n", st[index].roll_no, st[index].name, st[index].phone_no);
     }
     else{
      printf("student not found\n");
     }
}

void enterData(student *st, int len)
{
   printf("Enter student roll_no,name,phone_no\n");
   for (int i = 0; i < len; i++)
   {
      printf("student %d ", i + 1);
      scanf("%d %s %d", &st[i].roll_no, st[i].name, &st[i].phone_no);
   }
}
void enterDataHc(student *st)
{
     st[0].roll_no=101;
     strcpy(st[0].name,"bhushan");
     st[0].phone_no = 932784399;
     st[1].roll_no = 102;
     strcpy(st[1].name, "harshal");
     st[1].phone_no = 932784399;
     st[2].roll_no = 103;
     strcpy(st[2].name, "");
     st[2].phone_no = 932784399;
     st[3].roll_no = 104;
     strcpy(st[3].name, "bhushan");
     st[3].phone_no = 932784399;
}
// void display(student st[],int size){
//    for(int i=0;i<size;i++){
//       printf()
//    }
// }
int searchstudent(student *st, int size, int roll_no)
{
   for (int i = 0; i < size; i++)
   {
      if (st[i].roll_no == roll_no)
      {
         return i;
         break;
      }
   }
   return -1;
}