class Date{
   int day;
   int month;
   int year;

   void setDay(int d){
      System.out.println(this);
      this.day=d;
   }
   //"this" refers to current invoking object
   void setMonth(int month){
      if(month<1 || month>12){
         System.out.println("Enter Valid month");
         return;
      }
      this.month=month;
   }
   void setYear(int year){
      this.year=year;
   }
   void getDay(){
      System.out.println("Day "+this.day);
   }
   void getMonth(){
      System.err.println("Month "+this.month);
   }
   void getYear(){
      System.out.println("year "+this.year);
   }
   void getDate(){
      System.out.println(this.day + " " + this.month + " " + this.year);
   }
}
class Test{
     public static void main(String[] args) {
      Date d1;
      d1=new Date();
      d1.setDay(10);
      d1.setMonth(12);
      d1.setYear(2020);
      System.out.println("d1 "+d1);
      Date d2=new Date();
      d2.setDay(6);
      d2.setMonth(4);
      d2.setYear(11);
     }
}