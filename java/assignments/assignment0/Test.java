class Date{
   int day;
   int month;
   int year;
   String dow;

   Date(){
      this.day=1;
      this.month=1;
      this.year=2004;
      this.dow="friday"l
   }

   void setDay(int day){
      this.day=day;
   }
   void setMonth(int month){
      this.month=month;
   }
   void setYear(int year){
      this.year=year;
   }
   void setDow(String dow){
      this.dow=dow;
   }
   void display(){
     System.out.println(this.day+"/"+this.month+"/"+this.year);
     System.out.println("weak day "+this.dow);
   }
}
public class Test{
  public static void main(String[] args) {
      Date d1=new Date();
      d1.setDay(23);
      d1.setMonth(11);
      d1.setYear(2022);
      d1.setDow("Tuesday");
      d1.display();
  }
}
