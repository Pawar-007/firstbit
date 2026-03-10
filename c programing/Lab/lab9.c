#include<stdio.h>
struct time
{
   int hr,min,sec;
};
void main(){
   struct time t1;
   t1.hr=20;
   t1.min=320;
   t1.sec=500;

   printf("before conversion hh-mm-ss %d %d %d \n", t1.hr, t1.min, t1.sec);

   t1.min+=t1.sec/60;
   t1.sec%=60;
   t1.hr+=t1.min/60;
   t1.min%=60;
   printf("after conversion hr-min-sec %d %d %d \n", t1.hr, t1.min, t1.sec);
}
