// 2. Create a structure Time with data members as hrs, min, sec.Accept the values of all these members from user and display them.Also perform addition of two time variables and display the result.If sec goes beyond 60, carry it to min etc.Add a method to convert the given time into sec.
#include<stdio.h>
#include<stdlib.h>
typedef struct time{
   int hr;
   int min;
   int sec;
}time;
void storeTime(time*);
time* addTime(time*,time*);
int convertIntoSec(time *);
int main()
{
   time t1,t2;
   storeTime(&t1);
   storeTime(&t2);

   time* t3=addTime(&t1,&t2);
   printf("hh-mm-ss %d-%d-%d",t3->hr,t3->min,t3->sec);

   printf("time into sec ");
   printf("%d",convertIntoSec(&t1));
}
void storeTime(time*t){
   printf("Enter time in hh-mm-sec");
   int hr=0,min=0,sec=0;
   scanf("%d%d%d",&hr,&min,&sec);
   min+=(sec/60);
   (*t).sec=sec % 60;
   hr+=(min/60);
   (*t).min=min%60;
   (*t).hr=hr;
}
time *addTime(time *t1, time *t2){
   time* temp=(time*)malloc(sizeof(time));
   int sec=t1->sec+t2->sec;
   int min=t1->min+t2->min+sec/60;
   int hr=t1->hr+t2->hr+min/60;
   temp->hr=hr;
   temp->min=min%60;
   temp->sec=sec%60;
   return temp;  
}
int convertIntoSec(time* t){
   int sec=0;
   sec=(t->hr*60*60+t->min*60+t->sec);
   return sec;
}